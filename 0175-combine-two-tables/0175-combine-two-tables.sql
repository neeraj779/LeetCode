# Write your MySQL query statement below
SELECT p.firstName, p.lastName, a.city, a.state from Person p, Address a
WHERE p.personId = a.personId
UNION
SELECT  p.firstName, p.lastName, null, null from Person p
WHERE p.personId NOT IN (Select personId from Address);