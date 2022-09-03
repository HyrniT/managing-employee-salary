Managing Employee Salary

# Intro

Learning objectives:
* Singleton Pattern
* Factory Pattern
* Prototype Pattern
* Builder Pattern

# Definition

There are four types of employees in the company Omega.

1. Daily employees, get paid by the number of days spent working in a month 
    
    For example, if each day a daily employee is paid 100$, and in this month he worked 28 days. 
    
    The payment for this daily employee will be 100 x 28 = 2.800$
    
2. Hourly employees, get paid by the number of hours spent working in a month
    
    For example, if in this month an hourly employee worked 1200 hours, and for each hour he will be paid 15$
    
    The payment for this hourly employee will be 1200 x 15 = 1.800$
    
3. Product employees, get paid by the number of products created in a month
    
    For example, if this month a product employee created 180 products, and for each product he will be paid 10$
    
    The payment for this product employee will be 180 * 10 = 1.800$
    
4. Manager, get paid by the number of employees he managed, plus a fixed payment for each month
    
    For example, if a manager has 20 employees to manage, and for each employee, he will be paid 100$ for management, his fixed payment for a month is 500$.
    
    The payment for this manager this month will be 20 x 100 + 500 = 2500 
    

Each employee will have a Fullname.

