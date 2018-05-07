-- HackerRank - SQL:
-- Advanced Select:

-- Type of Triangle:-
-- MySQL
SELECT
CASE
	WHEN A + B > C AND B + C > A AND A + C > B THEN
    CASE
        WHEN A = B AND B = C THEN "Equilateral"
        WHEN A = B OR B = C OR A = C THEN "Isosceles"
        WHEN A != B AND B != C AND A != C THEN "Scalene"
    END
    ELSE "Not A Triangle"
END
FROM TRIANGLES;


-- The PADS:-
-- MySQL
-- Query 1: Ordered list of all names
SELECT CONCAT(Name, "(", SUBSTR(Occupation, 1, 1), ")") FROM OCCUPATIONS ORDER BY Name;

-- Query 2: Number of ocurrences of each occupation
SELECT CONCAT("There are a total of ", COUNT(Occupation), " ", LOWER(Occupation), "s.") FROM OCCUPATIONS GROUP BY Occupation ORDER BY COUNT(Occupation);
