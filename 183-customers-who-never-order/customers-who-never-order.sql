SELECT o1.name AS Customers 
FROM (Customers AS o1 LEFT JOIN Orders AS o2 ON o1.id = o2.customerId )
WHERE o2.id IS NULL