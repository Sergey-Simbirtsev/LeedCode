SELECT email
FROM (  SELECT  email, COUNT(email) AS cnt
        FROM Person
        GROUP BY email
    )
WHERE cnt > 1
