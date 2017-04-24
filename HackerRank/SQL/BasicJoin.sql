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


Average Population of Each Continent:-
    MySQL:
    SELECT COUNTRY.Continent, FLOOR(AVG(CITY.Population))
    FROM CITY JOIN COUNTRY ON CITY.CountryCode = COUNTRY.Code
    GROUP BY COUNTRY.Continent

    Oracle:
    SELECT COUNTRY.Continent, FLOOR(AVG(CITY.Population))
    FROM CITY JOIN COUNTRY ON CITY.CountryCode = COUNTRY.Code
    GROUP BY COUNTRY.Continent


Top Competitors:-
    MySQL:
    SELECT H.hacker_id, H.name
    FROM Hackers H JOIN Challenges C JOIN Difficulty D JOIN Submissions S
    ON S.challenge_id = C.challenge_id AND C.difficulty_level = D.difficulty_level AND D.score = S.score AND H.hacker_id = S.hacker_id
    GROUP BY H.hacker_id
    HAVING COUNT(H.hacker_id) > 1
    ORDER BY COUNT(H.hacker_id) DESC, H.hacker_id ASC;


The Report:-
    MySQL:
    SELECT CASE WHEN Grades.Grade >= 8 THEN Students.Name ELSE 'NULL' END, Grades.Grade, Students.Marks FROM Students JOIN Grades ON Students.Marks BETWEEN Grades.Min_Mark AND Grades.Max_Mark ORDER BY Grades.Grade DESC, Students.Name ASC;

    Oracle:
    SELECT CASE WHEN Grades.Grade >= 8 THEN Students.Name ELSE 'NULL' END, Grades.Grade, Students.Marks FROM Students JOIN Grades ON Students.Marks BETWEEN Grades.Min_Mark AND Grades.Max_Mark ORDER BY Grades.Grade DESC, Students.Name ASC;


Ollivanders Inventory:-
    MySQL:
    SELECT WANDS.Id, CoinsTable.Age, CoinsTable.Coins_needed, CoinsTable.pow
    FROM (SELECT WANDS_PROPERTY.Age AS Age, MIN(WANDS.Coins_needed) AS Coins_needed, WANDS.Power AS pow
    FROM WANDS JOIN WANDS_PROPERTY ON WANDS.Code = WANDS_PROPERTY.Code
    WHERE WANDS_PROPERTY.Is_evil = 0
    GROUP BY WANDS_PROPERTY.Age, WANDS.Power) AS CoinsTable JOIN WANDS_PROPERTY ON WANDS_PROPERTY.Age = COINSTABLE.Age
    JOIN WANDS ON WANDS.Code = WANDS_PROPERTY.Code AND WANDS.power = CoinsTable.pow
    AND WANDS.Coins_needed = CoinsTable.Coins_needed
    ORDER BY CoinsTable.Pow DESC, WANDS_PROPERTY.Age DESC
