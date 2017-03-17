HackerRank - SQL:
Basic Select:


Revising the SELECT Query I:-
    MySQL:
    SELECT * FROM CITY WHERE COUNTRYCODE = 'USA' AND POPULATION > 100000;

    Oracle:
    SELECT * FROM CITY WHERE COUNTRYCODE = 'USA' AND POPULATION > 100000;


Revising the SELECT Query II:-
    MySQL:
    SELECT NAME FROM CITY WHERE COUNTRYCODE = 'USA' AND POPULATION > 120000;

    Oracle:
    SELECT NAME FROM CITY WHERE COUNTRYCODE = 'USA' AND POPULATION > 120000;


SELECT All:-
    MySQL:
    SELECT ID, NAME, COUNTRYCODE, DISTRICT, POPULATION FROM CITY;

    Oracle:
    SELECT * FROM CITY;


SELECT by ID:-
    MySQL:
    SELECT ID, NAME, COUNTRYCODE, DISTRICT, POPULATION FROM CITY WHERE ID = 1661;

    Oracle:
    SELECT ID, NAME, COUNTRYCODE, DISTRICT, POPULATION FROM CITY WHERE ID = 1661;


Japanese Cities Attributes:-
    MySQL:
    SELECT ID, NAME, COUNTRYCODE, DISTRICT, POPULATION FROM CITY WHERE COUNTRYCODE = 'JPN';

    Oracle:
    SELECT ID, NAME, COUNTRYCODE, DISTRICT, POPULATION FROM CITY WHERE COUNTRYCODE = 'JPN';


Japanese Cities Names:-
    MySQL:
    SELECT NAME FROM CITY WHERE COUNTRYCODE = 'JPN';

    Oracle:
    SELECT NAME FROM CITY WHERE COUNTRYCODE = 'JPN';


Weather Observation Station 1:-
    MySQL:
    SELECT CITY, STATE FROM STATION;

    Oracle:
    SELECT CITY, STATE FROM STATION;


Weather Observation Station 3:-
    MySQL:
    SELECT DISTINCT CITY FROM STATION WHERE (ID % 2) = 0;

    Oracle:
    SELECT DISTINCT CITY FROM STATION WHERE mod(ID,2) = 0;


Weather Observation Station 4:-
    MySQL:
    SELECT COUNT(CITY) - COUNT(DISTINCT CITY) FROM STATION;

    Oracle:
    SELECT COUNT(CITY) - COUNT(DISTINCT CITY) FROM STATION;


Weather Observation Station 5:-
    MySQL:
    SELECT MIN(CITY), CHAR_LENGTH(CITY) FROM STATION WHERE CHAR_LENGTH(CITY) = (SELECT MAX(CHAR_LENGTH(CITY)) FROM STATION) OR CHAR_LENGTH(CITY) = (SELECT MIN(CHAR_LENGTH(CITY)) FROM STATION) GROUP BY CHAR_LENGTH(CITY);

    Oracle:
    SELECT MIN(CITY), LENGTH(CITY) FROM STATION WHERE LENGTH(CITY) = (SELECT MAX(LENGTH(CITY)) FROM STATION) OR LENGTH(CITY) = (SELECT MIN(LENGTH(CITY)) FROM STATION) GROUP BY LENGTH(CITY);


Weather Observation Station 6:-
    MySQL:
    SELECT DISTINCT CITY FROM STATION WHERE SUBSTR(CITY, 1, 1) IN ('A','E','I','O','U','a','e','i','o','u');

    Oracle:
    SELECT DISTINCT CITY FROM STATION WHERE SUBSTR(CITY, 1, 1) IN ('A','E','I','O','U','a','e','i','o','u');


Weather Observation Station 7:-
    MySQL:
    SELECT DISTINCT CITY FROM STATION WHERE LOWER(SUBSTR(CITY, -1)) IN ('a','e','i','o','u');

    Oracle:
    SELECT DISTINCT CITY FROM STATION WHERE LOWER(SUBSTR(CITY, -1)) IN ('a','e','i','o','u');


Weather Observation Station 8:-
    MySQL:
    SELECT DISTINCT city FROM station WHERE city REGEXP '^[AEIOUaeiou].*[AEIOUaeiou]$';

    Oracle:
    SELECT DISTINCT city FROM station WHERE REGEXP_LIKE (city, '^[AEIOUaeiou].*[AEIOUaeiou]$');


Weather Observation Station 9:-
    MySQL:
    SELECT DISTINCT city FROM station WHERE NOT city REGEXP '^[AEIOUaeiou].*';

    Oracle:
    SELECT DISTINCT city FROM station WHERE NOT REGEXP_LIKE (city, '^[AEIOUaeiou].*');


Weather Observation Station 10:-
    MySQL:
    SELECT DISTINCT city FROM station WHERE NOT city REGEXP '[AEIOUaeiou]$';

    Oracle:
    SELECT DISTINCT city FROM station WHERE NOT REGEXP_LIKE (city, '[AEIOUaeiou]$');


Weather Observation Station 11:-
    MySQL:
    SELECT DISTINCT city FROM station WHERE NOT city REGEXP '^[^aeiou].*[^aeiou]$'

    Oracle:
    SELECT DISTINCT city FROM station WHERE NOT REGEXP_LIKE (city, '^[AEIOUaeiou].*[AEIOUaeiou]$');


Weather Observation Station 12:-
    MySQL:
    SELECT DISTINCT city FROM station WHERE city REGEXP '^[^AEIOUaeiou].*[^AEIOUaeiou]$';

    Oracle:
    SELECT DISTINCT city FROM station WHERE REGEXP_LIKE (city, '^[^AEIOUaeiou].*[^AEIOUaeiou]$');


Higher Than 75 Marks:-
    MySQL:
    SELECT name FROM students WHERE marks > 75 ORDER BY SUBSTR(name, -3), id ASC;

    Oracle:
    SELECT name FROM students WHERE marks > 75 ORDER BY SUBSTR(name, -3), id ASC;


Employee Names:-
    MySQL:
    SELECT name FROM employee ORDER BY name;

    Oracle:
    SELECT name FROM employee ORDER BY name;


Employee Salaries:
    MySQL:
    SELECT name FROM employee WHERE salary > 2000 AND months < 10 ORDER BY employee_id ASC;

    Oracle:
    SELECT name FROM employee WHERE salary > 2000 AND months < 10 ORDER BY employee_id ASC;
