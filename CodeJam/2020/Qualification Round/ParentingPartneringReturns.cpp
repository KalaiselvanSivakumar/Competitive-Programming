#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct TimeSlot {
	int startTime;
	int endTime;
	int order;

	TimeSlot(int st, int et, int o) : startTime(st), endTime(et), order(o) {}
};

struct TimeSlotComparator {
	inline bool operator() (const TimeSlot& slot1, const TimeSlot& slot2) {
		return (slot1.startTime < slot2.startTime);
	}
};

void printResult(int caseId, string timeSheet) {
	cout << "Case #" << caseId << ": " << timeSheet << "\n";
}

void printArray(vector<TimeSlot> arr, int size) {
	for (int i = 0; i < size; ++i) {
		cout << arr[i].startTime << " " << arr[i].endTime << " " << arr[i].order << "\n";
	}
}

string computeTimeSheet(vector<TimeSlot> timeTable, int numberOfActivities) {
	// printArray(timeTable, numberOfActivities);
	sort(timeTable.begin(), timeTable.end(), TimeSlotComparator());
	bool CBusy = false, JBusy = false;
	int CEndTime = -1, JEndTime = -1;
	vector<char> timeSheet(numberOfActivities);
	for (int i = 0; i < numberOfActivities; ++i) {
		TimeSlot slot = timeTable[i];
		if (CEndTime <= slot.startTime) {
			CBusy = false;
		}
		if (JEndTime <= slot.startTime) {
			JBusy = false;
		}
		if (CBusy && JBusy) {
			return "IMPOSSIBLE";
		}
		if (!CBusy) {
			timeSheet[slot.order] = 'C';
			CEndTime = slot.endTime;
			CBusy = true;
		}
		else {
			timeSheet[slot.order] = 'J';
			JEndTime = slot.endTime;
			JBusy = true;
		}
	}
	// cout << "After sorting:\n";
	// printArray(timeTable, numberOfActivities);
	return string(timeSheet.begin(), timeSheet.end());
	return "";
}

int main() {
	int testCase, caseId = 1, numberOfActivities;
	int i, j;
	cin >> testCase;
	int startTime, endTime;
	while (caseId <= testCase) {
		cin >> numberOfActivities;
		vector<TimeSlot> timeTable;
		for (i = 0; i < numberOfActivities; ++i) {
			cin >> startTime >> endTime;
			timeTable.push_back(TimeSlot(startTime, endTime, i));
		}
		printResult(caseId, computeTimeSheet(timeTable, numberOfActivities));
		++caseId;
	}
}
