#Weather CLI Application

Author: Tejashree Kulkarni

About the project:
This is a Python command-line application that interacts with the OpenWeather API to manage weather details for cities. 
The application allows users to search for weather details of cities, add cities to a list of favorites (with a limit of three cities), 
list their favorite cities, and remove cities from their favorites.

Features
1. Search for Weather Details: Fetch and display current weather details for a city.
2. Add City to Favorites: Add a city to your list of favorite cities (limit of 3).
3. List Favorite Cities: View current weather details for all favorite cities.
4. Remove City from Favorites: Remove a city from the favorites list to make room for another.i

Requirements

Python 3.x: Ensure that you have Python 3 installed.
Dependencies: The project uses external libraries that are listed in requirements.txt.

#Setup Instructions

Follow these steps to set up and run the Weather CLI application.

1. Clone the Repository
Clone the repository to your local machine using the following command:

git clone <https://github.com/Tejk28/GCS_coding_assessment.git>
cd weather-cli

2. Install Dependencies

Install the necessary Python dependencies listed in requirements.txt. 

pip install -r requirements.txt

3. Set Up the OpenWeather API Key

To use the OpenWeather API, you need to have an API key. You can obtain your key by signing up at OpenWeather.

After getting the API key, create a .env file in the root directory of the project and add the following content:

OPENWEATHER_API_KEY=your_api_key
Replace your_api_key with the actual API key you obtained from OpenWeather.

Make sure the .env file is not committed to the repository by adding it to .gitignore (this is already done in the repo).

4. Running the Application

After setting up the environment and installing dependencies, you can run the application.

python weather.py

The application will start in the terminal, and you will be prompted to enter commands to interact with it.

#Application Commands

Once the application is running, the following commands are available:

1. Search Weather

Use the search command to look up weather details for a city:
Enter city name: New York
This will display the weather details for New York, including temperature, humidity, and description.

2. Add City to Favorites

Use the add command to add a city to your list of favorite cities:
Enter city name to add to favorites: New York
You can only add up to 3 cities. If you reach this limit, you will need to remove a city to add a new one.

3. List Favorite Cities

Use the list command to display all cities currently in your favorites list:
🏙️ Favorite Cities:
Weather in New York:
- 🌡️ Temperature: 15°C
- 💧 Humidity: 60%
- 📝 Description: Clear sky

4. Remove City from Favorites

Use the remove command to remove a city from your favorites list:
Enter city name to remove from favorites: New York
Once removed, you can add a new city to the favorites list.

5. Exit Application

Use the exit command to stop the application:

👋 Thank you for using the Weather CLI Application. Stay safe and have a great day!

#Project Structure

The repository includes the following files:

weather-cli/
├── .gitignore              # Specifies files/folders to be ignored by Git
├── README.md               # Project overview and setup instructions
├── requirements.txt        # List of project dependencies
├── weather.py              # Main Python script for the application
