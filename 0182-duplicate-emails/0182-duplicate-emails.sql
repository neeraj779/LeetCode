# Write your MySQL query statement below
SELECT Email from person group by Email having count(Email)>1