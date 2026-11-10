**(a) Inputs and Outputs**

* **Inputs:** Distance in km (`double`), travel time in hours (`int`), travel time in minutes (`int`), car's fuel use in liters per 100 km (`double`), and the fuel price per liter in birr (`double`).
* **Outputs:** Average speed in km/h, total fuel used in liters, and total fuel cost in birr. All of these will be formatted to exactly two decimal places.

**(b) Process**

1. Declare and initialize the variables for the user inputs (distance, hours, minutes, fuel use, and fuel price).
2. Declare variables to hold our final calculations (total time in hours, average speed, fuel used, and total cost).
3. Prompt the user to input the distance, hours, minutes, fuel use, and price per liter.
4. Convert the total travel time into a single floating-point hours value. To do this without losing the decimal, divide the minutes by `60.0` (or cast it to a double) and add it to the hours.
5. Find the average speed by dividing the distance by the total time in hours.
6. Calculate the total fuel used by dividing the distance by `100.0`, then multiplying that by the car's fuel use rate.
7. Calculate the final fuel cost by multiplying the total fuel used by the price per liter.
8. Set up the output stream using `<iomanip>` (`fixed` and `setprecision(2)`) to make sure our results print with exactly two decimal places.
9. Print the calculated average speed, total fuel used, and total cost to the screen.
