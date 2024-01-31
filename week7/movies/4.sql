SELECT title FROM movies
WHERE year >='2018'
ORDER BY title ASC;



SELECT title FROM movies
JOIN ratings
ON movies.id = ratings.movie_id
WHERE ratings.rating ='10.0';