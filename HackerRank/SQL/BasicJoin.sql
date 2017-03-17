HackerRank - SQL:
Basic Join:


Asian Population:-
    MySQL:
    SELECT SUM(city.population) FROM city INNER JOIN country ON city.countrycode = country.code WHERE country.continent = 'Asia';

    Oracle:
    SELECT SUM(city.population) FROM city INNER JOIN country ON city.countrycode = country.code WHERE country.continent = 'Asia';


The Report:-
    MySQL:
    SELECT CASE WHEN Grades.Grade >= 8 THEN Students.Name ELSE 'NULL' END, Grades.Grade, Students.Marks FROM Students JOIN Grades ON Students.Marks BETWEEN Grades.Min_Mark AND Grades.Max_Mark ORDER BY Grades.Grade DESC, Students.Name ASC;
    
    Oracle:
    SELECT CASE WHEN Grades.Grade >= 8 THEN Students.Name ELSE 'NULL' END, Grades.Grade, Students.Marks FROM Students JOIN Grades ON Students.Marks BETWEEN Grades.Min_Mark AND Grades.Max_Mark ORDER BY Grades.Grade DESC, Students.Name ASC;


