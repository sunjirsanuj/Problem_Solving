SELECT c.id
FROM Weather c
JOIN Weather p
ON DATEDIFF(c.recordDate, p.recordDate) = 1
AND c.temperature > p.temperature;
