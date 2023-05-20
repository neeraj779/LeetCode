# Write your MySQL query statement below
select Name as Customers from Customers where 0 = (select count(*) from Orders where Customers.Id = Orders.CustomerId)