# A2--25k-0055-
This is my Oop assignment 2 

![image alt](https://github.com/k250055-Aliyan/A2--25k-0055-/blob/3e9a0b09bd57076805300f413e5d2b48c8a57ed9/Screenshot%202026-05-09%20161544.png)
Screenshot 1: Homepage Navigation (PakWheels)

📷 Screenshot shows the homepage of PakWheels where different sections like Used Cars, New Cars, Bikes, Auto Shows, Videos, Blogs, and Forums are displayed.

💻 Code Mapping:
This feature is implemented using the `Marketplace` class in our system.

Main function used:
- Marketplace::displayAllListings()
- Marketplace::displayStats()

Explanation / Reasoning:
This feature represents the main landing page of a car marketplace system where users can navigate to different sections. In our project, the Marketplace class manages and displays all available listings, simulating the homepage structure of PakWheels.


![image alt](https://github.com/k250055-Aliyan/A2--25k-0055-/blob/9bd68e907d1afa5a9dfe41ad5ba52ac2866f9b6b/Screenshot%202026-05-09%20161420.png)

screenshot 2: Contact Seller Feature (Car Listing Page)

📷 Screenshot shows a car listing page where options like "Call Seller" and "Message Seller" are available.

💻 Code Mapping:
This feature is implemented using the `Message` class and messaging functions inside the Marketplace system.

Main functions used:
- Marketplace::sendMessage()
- Buyer::receiveMessage()
- Seller::receiveMessage()

💡Explanation / Reasoning:
This feature allows communication between buyer and seller. In real platforms like PakWheels, users can directly contact sellers for inquiries. In our system, this is implemented using the Message class which handles buyer-seller communication for a specific listing.

![image alt](https://github.com/k250055-Aliyan/A2--25k-0055-/blob/f54347432cfa5de3ab17f101e91b888f759ce04a/Screenshot%202026-05-09%20160949.png)
This screenshot shows the “Sell Your Car” section where users enter their personal and vehicle details.

💻 Code Mapping:
Seller class
Vehicle class
Marketplace::addListing()
CarListing class

💡 Explanation / Reasoning:
This feature simulates the selling process where a user submits vehicle details to create a listing. In our project, the addListing() function in Marketplace handles this process and converts seller input into a structured car listing.

![image alt](https://github.com/k250055-Aliyan/A2--25k-0055-/blob/fd85d48374185a667647e2bd1b755ddcf03cc4d1/Screenshot%202026-05-09%20160737.png)
This screenshot shows filters like price, year, and model

💻 Code Mapping:
SearchFilter class
Marketplace::searchListings()
CarListing::matchesSearch()
Vehicle attributes

💡 Explanation / Reasoning:
This feature helps users find specific cars based on conditions like price, model, and year. It improves usability by narrowing results. In our system, the SearchFilter class implements this logic, similar to PakWheels search functionality.

![image alt](https://github.com/k250055-Aliyan/A2--25k-0055-/blob/1ca4886cc15af6b77697c3b340013d10978de945/Screenshot%202026-05-09%20160620.png)
📷 This screenshot shows all used cars available for browsing

💻 Code Mapping:
Marketplace class
CarListing class
Vehicle class
displayAllListings()

💡 Explanation / Reasoning:
This feature displays all available used cars in the marketplace. It represents the core browsing system of PakWheels where users can view multiple listings. In our project, Marketplace manages and displays all approved listings.


