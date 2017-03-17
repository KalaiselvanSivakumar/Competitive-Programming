HackerRank - SQL:
Basic Join:


Asian Population:-
    MySQL:
    SELECT SUM(city.population) FROM city INNER JOIN country ON city.countrycode = country.code WHERE country.continent = 'Asia';

    Oracle:
    SELECT SUM(city.population) FROM city INNER JOIN country ON city.countrycode = country.code WHERE country.continent = 'Asia';


African Cities:-
    MySQL:
    SELECT CITY.name FROM CITY JOIN COUNTRY ON CITY.countrycode = COUNTRY.code WHERE COUNTRY.continent = 'Africa';

    Oracle:
    SELECT CITY.name FROM CITY JOIN COUNTRY ON CITY.countrycode = COUNTRY.code WHERE COUNTRY.continent = 'Africa';


Top Competitors:-
    MySQL:
    SELECT H.hacker_id, H.name
    FROM Hackers H JOIN Challenges C JOIN Difficulty D JOIN Submissions S
    ON S.challenge_id = C.challenge_id AND C.difficulty_level = D.difficulty_level AND D.score = S.score AND H.hacker_id = S.hacker_id
    GROUP BY H.hacker_id
    HAVING COUNT(H.hacker_id) > 1
    ORDER BY COUNT(H.hacker_id) DESC, H.hacker_id ASC;

    Oracle:



The Report:-
    MySQL:
    SELECT CASE WHEN Grades.Grade >= 8 THEN Students.Name ELSE 'NULL' END, Grades.Grade, Students.Marks FROM Students JOIN Grades ON Students.Marks BETWEEN Grades.Min_Mark AND Grades.Max_Mark ORDER BY Grades.Grade DESC, Students.Name ASC;

    Oracle:
    SELECT CASE WHEN Grades.Grade >= 8 THEN Students.Name ELSE 'NULL' END, Grades.Grade, Students.Marks FROM Students JOIN Grades ON Students.Marks BETWEEN Grades.Min_Mark AND Grades.Max_Mark ORDER BY Grades.Grade DESC, Students.Name ASC;
