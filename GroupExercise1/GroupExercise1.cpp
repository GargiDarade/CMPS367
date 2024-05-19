// C++ implementation of GroupExercise 1 weather data app 
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 367 Object Oriented Language C++

#include <iostream>
#include <string>  // for string and to_string()
#include <iomanip> // for fixed and setprecision()
using namespace std;

// starting function/Driver code
int main()
{
    //variables to store the weather-related data
    double temperature; //in degrees Celsius
    double humidity;    //as a percentage
    double windSpeed;   //in kilometers per hour

    //variables to store recommendations based on the input
    string  temperatureDescription ,  humidityDescription,  windSpeedDescription, weatherSummary;

    bool loop=true;
    char repeat;

    cout << fixed; //outputs floating-point numbers in a fixed decimal format
    cout << setprecision(2); //formats the output of decimal numbers to two decimal places

    //Prompt the user to input values one by one.

    //note initial value of loop is true
    while(loop)
    {
        cout << "\nPlease provide weather-related data.";
        cout << "\nPlease enter current Temperature (in degrees Celsius). ";
        cin>>temperature;
        cout << "\nPlease enter current Humidity (as a percentage). ";
        cin>>humidity;
        cout << "\nPlease enter current Wind Speed (in kilometers per hour). ";
        cin>>windSpeed;
        //Temperature Analysis:
        if(temperature<0)
        {
            //temperature is below 0°C
            temperatureDescription= "very cold";
        } else if(temperature>=0 && temperature<10)
        {
            //temperature is between 0°C and 10°C
            temperatureDescription= "chilly";
        }else if(temperature>=10 && temperature<=25)
        {
            //temperature is between 10°C and 25°C
            temperatureDescription= "comfortable";
        }else 
        {
            //temperature is above 25°C
            temperatureDescription= "quite warm";
        }
        //Humidity Analysis:
        if(humidity<30)
        {
            //humidity is below 30%, mention it's dry.
            humidityDescription= "dry";
        } else if(humidity>=30 && humidity<=60)
        {
            //humidity is between 30% and 60%
            humidityDescription= "moderate humidity";
        }else 
        {
            //humidity is above 60%
            humidityDescription= "humid";
        }
        //Wind Speed Analysis
        if(windSpeed<10)
        {
            //wind speed is less than 10 km/h.
            windSpeedDescription= "calm";
        } else if(windSpeed>=10 && windSpeed<=30)
        {
            //wind speed is between 10 km/h and 30 km/h
            windSpeedDescription= "breezy";
        }else 
        {
            //wind speed is above 30 km/h
            windSpeedDescription= "windy";
        }
        //Combine the analyses for temperature, humidity, 
        //and wind speed to provide an overall weather summary.
        weatherSummary="Present weather is " + temperatureDescription + ", " + humidityDescription + " and " + windSpeedDescription;

        //Display the weather summary to the user.
        cout << "\n" <<weatherSummary<<endl;

        cout << "\nlike to check again! (Y/N):";
        cin>>repeat;
        if(!(repeat=='Y' || repeat=='y'))
        {
            loop=false;
        }
    }
    cout<<"\nThank you for using weather app!";
    cout << endl;
	return 0;

}
