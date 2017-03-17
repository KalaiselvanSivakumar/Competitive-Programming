HackerRank - SQL:
Basic Join:


Asian Population:-
    MySQL:
    SELECT SUM(city.population) FROM city INNER JOIN country ON city.countrycode = country.code WHERE country.continent = 'Asia';

    Oracle:
    SELECT SUM(city.population) FROM city INNER JOIN country ON city.countrycode = country.code WHERE country.continent = 'Asia';
