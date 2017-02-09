#Python 3 - Not solved yet

no_of_fighters, no_of_teams, no_of_queries = input().split()
no_of_fighters = int(no_of_fighters)
no_of_teams = int(no_of_teams)
no_of_queries = int(no_of_queries)

#Create team lists
team_members = []
for i in range(no_of_teams+1):
    temp = []
    team_members.append(temp)

#Initialize team members
for i in range(no_of_fighters):
    temp = [int(x) for x in input().split()]
    team_members[temp[1]].append(temp[0])

#Sort the teams based on their strengths
for i in range(no_of_teams):
    team_members[i+1].sort()

for i in range(no_of_queries):
    temp = [int(x) for x in input().split()]
    if temp[0] == 1:
        team_members[temp[2]].append(temp[1])
    else:
        if sum(team_members[temp[1]]) == sum(team_members[temp[2]]):
            print (temp[1])
            continue
        j = len(team_members[temp[1]])-1
        k = len(team_members[temp[2]])-1
        while j>=0 and k>=0:
            k -= team_members[temp[1]][j]
            if k>=0:
                j -= team_members[temp[2]][k]
        if j>=0:
            print (temp[1])
        else:
            print (temp[2])
