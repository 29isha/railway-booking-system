//booking.c
#include <stdio.h>
#include <math.h>
#include <string.h>

// Information of user who is booking
void Shatabdi();
void fareofbooking();
int meal();
int Shatabdi_Booking();
int Pass_Info();

void Information()
{

    char mail[80];
    int Mobile_Number;
    int otp;
    char Login_Id[20];
    char Password[20];

    printf("Enter your mail Id:\n");
    scanf("%s", mail);

    printf("Enter your Mobile Number:\n");
    scanf("%d", &Mobile_Number);

    printf("Enter your login id:\n");
    scanf("%s",Login_Id);

    printf("Enter your Mobile Number:\n");
    scanf("%d", &Mobile_Number);

    printf("%s \n %d", mail, Mobile_Number);

    printf("\nYour OTP is 1234\n");
    printf("Enter yout OTP:\n");

    // while is use to verify the otp
    while (1)
    {

        scanf("%d", &otp);

        if (otp == 1234)
        {
            break;
        }
        else
        {
            printf("Your Enter OTP in invalid\n");
            printf("Renter your OTP:\n");
        }
    }
}

// This is are function that are defined and call in later part of function  

void West_Bengal();
void Maharashtra();
void Delhi();
void Uttar_Pradesh();
void Madhya_Pradesh();
void Punjab();
void Gujarat();
void Rajasthan();
void Tamil_Nadu();
void StatesArrival();

// Function for states selection
void States(){

    int Destination_State;
    printf("Select the state from where you want to go\n");
    printf("1. Maharashtra\n2. Delhi\n3. U.P.\n4. M.P.\n5. Punjab\n6. Gujarat\n7. Rajasthan\n8. TamilNadu\n9. West Bengal\n");
    scanf("%d",&Destination_State);

    switch (Destination_State){

        case 1:
            
            // Is defined already in upper part and only called

            Maharashtra();
            break;
    
        case 2:
            Delhi();
            break;
    
        case 3:
            Uttar_Pradesh();
            break;
    
        case 4:
            Madhya_Pradesh();
            break;
    
        case 5:
            Punjab();
            break;
    
        case 6:
    
            Gujarat();
    
            break;
    
        case 7:
            Rajasthan();
            break;
    
        case 8:
            Tamil_Nadu();
            break;
            
        case 9:
            West_Bengal();
            break;
    
        
    default:
        printf("you have selected Wrong state");
        break;
    }

}

// Upper funtion defined

void Maharashtra(){

    int Railway_Station;
    printf("\nSELECT THE STATION OF MUMBAI\n");

   // printf("Mumbai Central, Pune Junction, Aurangabad Junction, Nagpur Junction, Kurla ");
    printf("1. Mumbai Central\n2. Pune Junction\n3. Aurangabad Station\n4. Nagpur Junction\n5. Kurla\n");
    
    scanf("%d",&Railway_Station);

    switch (Railway_Station){

        case 1:
            /* code */
            StatesArrival();
          //  CSMT_Rajdhani();
          //  CSMT_Rajdhani_Booking();
            fareofbooking();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
    
        case 3:
            /* code */
            StatesArrival();
            break;
        case 4:
            /* code */
            StatesArrival();
            break;
        case 5:
            /* code */
            StatesArrival();
            break; 
        
        default:
            printf("You entered wrong Railway Station");
            break;
    }


}

void Delhi(){
    
    int Railway_Station;
    printf("\nSELECT THE STATION OF DELHI\n");

       printf("1. Hazrat Nizamuddin\n2. New Delhi\n");
           scanf("%d",&Railway_Station);



    switch (Railway_Station){

        case 1:
            /* code */
            StatesArrival();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
        
        default:
    
            printf("You entered wrong Railway Station");
            break;
    }


}

void Uttar_Pradesh(){

    int Railway_Station;
    printf("\nSELECT THE STATION OF UP\n");

    printf("1. Ayodhya Junction\n2. Varanasi Junction\n3. Ghaziabad Junction\n4. Kanpur Central\n5. Lucknow Junction\n");
        scanf("%d",&Railway_Station);


 
    switch (Railway_Station){

        case 1:
            /* code */
            StatesArrival();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
    
        case 3:
            /* code */
            StatesArrival();
            break;
        case 4:
            /* code */
            StatesArrival();
            break;
        case 5:
            /* code */
            StatesArrival();
            break; 
        
        default:
            printf("You entered wrong Railway Station");
            break;
    }

}

void Madhya_Pradesh(){

    int Railway_Station;
    printf("\nSELECT THE STATION OF MP\n");

    printf("1. Gwalior Junction\n2. Bhopal Junction\n3. Indore Junction\n4. Ujjain Junction\n");
        scanf("%d",&Railway_Station);

    switch (Railway_Station){

        case 1:
            /* code */
            StatesArrival();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
    
        case 3:
            /* code */
            StatesArrival();
            break;
        case 4:
            /* code */
            StatesArrival();
            break;
       
        default:
            printf("You entered wrong Railway Station");
            break;
    
    }
}

void Punjab(){

    int Railway_Station;
    printf("\nSELECT THE RAILWAY STATION OF PUNJAB:\n");

   // printf("Amritsar Junction, Patiala, Jalandhar.");
    printf("1. Amritsar Junction\n2. Patiala\n3. Jalandhar");
        scanf("%d",&Railway_Station);



    switch (Railway_Station){

        case 1:
            /* code */
            StatesArrival();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
    
        case 3:
            /* code */
            StatesArrival();
            break;
       
        default:
            
           printf("You entered wrong Railway Station");
           break;
    }

}

void Gujarat(){

    int Railway_Station;
    printf("\nSELECT THE RAILWAY STATION OF GUJARAT\n");

    printf("1. Ahmedabad Junction\n2. Surat\n3. Rajkot Junction\n4. Vadodara Junction\n5. Gandhinagar Capital\n");
        scanf("%d",&Railway_Station);



    switch (Railway_Station){

        case 1:
            /* code */
            StatesArrival();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
    
        case 3:
            /* code */
            StatesArrival();
            break;
        
        case 4:
            /* code */
            StatesArrival();
            break;
       
        case 5:
            /* code */
            StatesArrival();
            break; 
        
        default:
           printf("You entered wrong Railway Station");
            break;
    }

}

void Rajasthan(){

    int Railway_Station;
    printf("\nSELECT THE RAILWAY STATION OF RAJASTHAN\n");

    //printf("Jaipur Junction, Jodhpur Junction , Udaipur, Kota Junction.");
    printf("1. Jaipur Junction\n2. Jodhpur Junction\n3. Udaipur\n4. Kota Junction\n");
        scanf("%d",&Railway_Station);



    switch (Railway_Station){
            
        case 1:
            /* code */
            StatesArrival();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
    
        case 3:
            /* code */
            StatesArrival();
            break;
        
        case 4:
            /* code */
            StatesArrival();
            break;
        
        
        default:
           printf("You entered wrong Railway Station");
            break;
    }

}

void Tamil_Nadu(){

    int Railway_Station;
    printf("\nSELECT THE RAILWAY STATION  OF TAMIL NADU\n");

    printf("1. Chennai\n2. Madurai\n3. Coimbatore\n4. Vellore\n");
        scanf("%d",&Railway_Station);
        StatesArrival();


    switch (Railway_Station){
    
        case 1:
            /* code */
            StatesArrival();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
    
        case 3:
            /* code */
            StatesArrival();
            break;
        case 4:
            /* code */
            StatesArrival();
            break;
        
        default:
           printf("You entered wrong Railway Station");
            break;
    }
}
 void West_Bengal(){
     
     int Railway_Station;
    printf("\nSELECT THE RAILWAY STATION  OF West Bengal\n");

    printf("1. Kolkata\n2. Durgapur\n3. Haldia\n");
        scanf("%d",&Railway_Station);
        StatesArrival();


    switch (Railway_Station){
    
        case 1:
            /* code */
            StatesArrival();
            break;
        
        case 2:
            /* code */
            StatesArrival();
            break;
    
        case 3:
            /* code */
            StatesArrival();
            break;
        
        default:
           printf("You entered wrong Railway Station");
            break;
    }
 }


// This is are function that are defined and call in later part of function 
void West_Bengal1(); 
void Maharashtra1();
void Delhi1();
void Uttar_Pradesh1();
void Madhya_Pradesh1();
void Punjab1();
void Gujarat1();
void Rajasthan1();
void Tamil_Nadu1();

// Function for states selection

void StatesArrival(){

    int Arrival_State;
    printf("\nSELECT THE STATE YOU WANT TO VISIT:\n");

    printf("1. Maharashtra\n2. Delhi\n3. U.P.\n4. M.P.\n5. Punjab\n6. Gujarat\n7. Rajasthan\n8. TamilNadu\n9. West Bengal\n");
    scanf("%d",&Arrival_State);

    switch (Arrival_State){

        case 1:
            // Is defined already in upper part and only called
            Maharashtra1();
            break;
    
        case 2:
            Delhi1();
            break;
    
        case 3:
            Uttar_Pradesh1();
            break;
    
        case 4:
            Madhya_Pradesh1();
            break;
    
        case 5:
            Punjab1();
            break;
    
        case 6:
            Gujarat1();
            break;
    
        case 7:
            Rajasthan1();
            break;
    
        case 8:
            Tamil_Nadu1();
            break;
            
        case 9:
            West_Bengal1();
            break;
        
    default:
        printf("you have selected Wrong state");
        break;
    }

}

// Upper funtion defined
void Maharashtra1(){

    int Railway_Station;
    printf("\nSELECT THE RAILWAY STAITION OF MUMBAI\n");

    printf("1. Mumbai Central\n2. Pune Junction\n3. Aurangabad Station\n4. Nagpur Junction\n5. Kurla\n");
        scanf("%d",&Railway_Station);


    switch (Railway_Station){

        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break; 
        
        default:
           printf("You entered wrong Railway Station");
            break;
    }


}

void Delhi1(){
    
    int Railway_Station;
    printf("\nSELECT THE RAILWAY STATION OF DELHI :\n");

    printf("1. Hazrat Nizamuddin\n2. New Delhi\n");
        scanf("%d",&Railway_Station);


    switch (Railway_Station){

        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        default:
    
            printf("You entered wrong Railway Station");
            break;
    }


}

void Uttar_Pradesh1(){

    int Railway_Station;
    printf("\nSELECT THE RAILWAY STATION OF UP:\n");
    printf("1. Ayodhya Junction\n2. Varanasi Junction\n3. Ghaziabad Junction\n4. Kanpur Central\n5. Lucknow Junction\n");
        scanf("%d",&Railway_Station);
        
    switch (Railway_Station){

        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break; 
        
        default:
            printf("You entered wrong Railway Station");
            break;
    }

}

void Madhya_Pradesh1(){

    int Railway_Station;
    printf("\nSELECT THE RAILWAY STATION OF MP:\n");

    printf("1. Gwalior Junction\n2. Bhopal Junction\n3. Indore Junction\n4. Ujjain Junction\n");
        scanf("%d",&Railway_Station);


    switch (Railway_Station){

        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        
        default:
           printf("You entered wrong Railway Station");
            break;
    
    }
}

void Punjab1(){

    int Railway_Station;
    printf("\nSELECT THE RAILWAY STATION OF PUNJAB:\n");
    printf("1. Amritsar Junction\n2. Patiala\n3. Jalandhar");
        scanf("%d",&Railway_Station);


    switch (Railway_Station){

        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;

        default:
        printf("You entered wrong Railway Station");
            break;
    }

}

void Gujarat1(){

    int Railway_Station;
    printf("\nSELECT THE RAILWAY STATION OF GUJARAT:\n");

    printf("1. Ahmedabad Junction\n2. Surat\n3. Rajkot Junction\n4. Vadodara Junction\n5. Gandhinagar Capital\n");
        scanf("%d",&Railway_Station);


    switch (Railway_Station){

        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;
        
        case 4:
            /* code */
            break;
       
        case 5:
            /* code */
            break; 
        
        default:
            printf("You entered wrong Railway Station");
            break;
    }

}

void Rajasthan1(){

    int Railway_Station;
    printf("\nSELECT THE RAILWAY STATION OF RAJASTHAN:\n");
    printf("1. Jaipur Junction\n2. Jodhpur Junction\n3. Udaipur\n4. Kota Junction\n");
        scanf("%d",&Railway_Station);


    switch (Railway_Station){
            
        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;
        
        case 4:
            /* code */
            break;
       
        default:
        printf("You entered wrong Railway Station");
            break;
    }

}

void Tamil_Nadu1(){

    int Railway_Station;
    printf("\nSELECT THE RAILWAY STATION OF TAMIL NADU:\n");

    printf("1. Chennai\n2. Madurai\n3. Coimbatore\n4. Vellore\n");
        scanf("%d",&Railway_Station);



    switch (Railway_Station){
    
        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        
        default:
            printf("You entered wrong Railway Station");
            break;
    }
}

void West_Bengal1()
{
    int Railway_Station;
    printf("\nSELECT THE RAILWAY STATION OF WEST BENGAL:\n");

    printf("1. Kolkata\n2. Durgapur\n3. Haldia\n");
        scanf("%d",&Railway_Station);
    switch (Railway_Station){
    
        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;
    
        case 3:
            /* code */
            break;
        
        default:
            printf("You entered wrong Railway Station");
            break;
    }
}

void Shatabdi(){

    printf("\t\t236781  SHATABDI EXPRESS\n");
    printf("\t\tDeparture             Arrival\n");
    printf("\t\t  19:20                10:17\n");
    printf("\t\t 3A     2A     1A\n");
    printf("\t\t AVL    AVL    AVL\n");
    printf("\t\t 30     40     93\n");
    printf("\t\t₹2135  ₹4564  ₹5892\n");

}

int Shatabdi_Booking();

void fareofbooking(){
    
    Shatabdi();
    int fare =Shatabdi_Booking();

    int Number_of_pass = Pass_Info();

    int mealorder;
    printf("enter 1 if you want to order meal else enter 2\n");
    scanf("%d",&mealorder);

    int mealfare = 0;

    if(mealorder == 1){
       meal();
    
    mealfare = meal();
    }

    int total_fare = (Number_of_pass * fare) + (Number_of_pass * mealfare);
    printf("%d\n",total_fare);
}

int Shatabdi_Booking(){

    int class,fare;

    printf("Select class:\n");
    scanf("%d", &class);

    switch(class){
        
        case 3:

            printf("you have selected 3A\n");
            fare = 2135;
            return fare;
            break;

        case 2:

            printf("you have selected 2A\n");
            fare = 4564;
            return fare;
            break;


        case 1:

            printf("you have selected 1A\n");
            fare = 5892;
            return fare;
            break;


        default:

            printf("Your selected option is not available\n");

    }

}

int Pass_Info(){

    int Number_of_pass;
    printf("Enter the number of travellers\n");
    scanf("%d",&Number_of_pass);

    char nameofpass[Number_of_pass][10];
    int ageofpass[Number_of_pass];
    int genderofpass[Number_of_pass];

    for(int i = 0; i < Number_of_pass; i++){

        printf("Enter the name of p%d:\n",i+1);
        scanf("%s",nameofpass[i]);

        printf("Enter age:\n");
        scanf("%d",&ageofpass[i]);

        printf("Enter the Gender\n1. Male\n2. Female \n3. Other\n");
        scanf("%d",&genderofpass[i]);
    }
}

int meal(){

    int mealoption;

    printf("1. Veg Meal (DAL,RICE,ROTI,SHAHI PANEER)\n2. Non-Veg Meal (Egg Curry with Rice)\n3. Non-Veg Meal(Chicken Curry with Rice)\n");
    scanf("%d",&mealoption);

    switch(mealoption){

        case 1:
            
            printf("Veg Meal\n");
            return 90;
            
            break;

        case 2:
            
            printf("Non-Veg (egg) Meal\n");
            return 110;

            break;

        case 3:
            
            printf("Non-Veg (chicken) Meal\n");
            return 150;

            break;

        default:
           
           printf("you haven't selected any meal\n");
    }
}

void pay()
{
    // payment method option
    int pay_method;

    // otp verfication
    int BankOTP;

    // NetBanking
    int NameOfBank;
    char BankName[20];
    char NetBankingLoginId;
    char NetBankingPassword;

    // UPI
    char UPI_ID[15];

    // Card Payment
    double Card_Number;
    char Card_Holder_Name[10];
    int ExpMonth;
    int ExpMonth_Verfiy;
    int ExpYear;
    int ExpYear_Verfiy;
    int Card_CVV;
    int Card_CVV_Verfiy;

    printf("Select the Payment method from following\n");
    printf("1. Netbanking\n2. UPI\n3. Debit/Credit Card\n");
    scanf("%d", &pay_method);

    // switch case is use to select the payment method

    switch (pay_method){
        
        // NET BANKING PAYMENT METHOD
        case 1:
    
            printf("Select from Following Banks\n");
            printf("1. State Bank Of India\n2. HDFC\n3. ICICI\n4. Cannar Bank\n5. Yes Bank\n6. Other\n");
            scanf("%d", &NameOfBank);
    
            // if Your bank name is not in list
            if (NameOfBank == 6){
    
                printf("Enter your Bank Name:\n");
                scanf("%s", BankName);
    
                printf("Enter Your Login Id:\n");
                scanf("%s", &NetBankingLoginId);
    
                printf("Enter Your Passward:\n");
                scanf("%s", &NetBankingPassword);
    
                printf("Your OTP is 1234\n");
                
                // this while will check that otp is correct or in incorrect if incorrect it will tell to renter the OTP
                while (1){

                    scanf("%d", &BankOTP);
                    if (BankOTP == 1234){

                        printf("Your Payment is in Process\n");
                        printf("Your Payment is Succesful\n");
                        break;
                    }
                    
                    else{

                        printf("you have Enter wrong OTP\n");
                        printf("Renter the OTP:\n");
                    }
                }

                break;
            }
    
            // for bank in the list
            else{
    
                printf("Enter Your Login Id\n");
                scanf("%s", &NetBankingLoginId);
    
                printf("Enter Your Passward\n");
                scanf("%s", &NetBankingPassword);
    
                printf("Your OTP is 1234\n");
                
                // this while will check that otp is correct or in incorrect if incorrect it will tell to renter the OTP
                while (1){

                    scanf("%d", &BankOTP);
                    
                    if (BankOTP == 1234){

                        printf("Your Payment is in Process\n");
                        printf("Your Payment is Succesful\n");
                        break;
                    }

                    else{

                        printf("you have Enter wrong OTP\n");
                        printf("Renter the OTP\n");
                    }
                }
                break;
            }
        
        // UPI ID PAYMENT METHOD
        case 2:
            
            printf("Enter your UPI Id:\n");
            scanf("%s", UPI_ID);
    
            printf("Your Payment is in Process\n");
            printf("Your Payment is Succesful\n");
    
            break;
        
        // CARD PAYMENT METHOD
        case 3:
    
            printf("Enter your card number\n");
            scanf("%lf", &Card_Number);
            
    
            printf("Enter your name\n");
            scanf("%s", Card_Holder_Name);
    
            printf("Enter your Card exp month\n");
            scanf("%d", &ExpMonth);
            
           
    
            printf("Enter your Card exp year\n");
            scanf("%d", &ExpYear);
            
            
    
            printf("Enter your CVV Number\n");
            scanf("%d", &Card_CVV);
            
            
            
            printf("Your OTP is 1234\n");

            // this while will cheak that opt is correct or in incorrect if incorrect it will tell to renter the OTP
            while (1){

                scanf("%d", &BankOTP);
                if (BankOTP == 1234){

                    printf("Your Payment is in Process\n");
                    printf("Your Payment is Succesful\n");
                    break;
                }
    
                else{

                    printf("you have Enter wrong OTP\n");
                    printf("Renter the OTP\n");
                }
            }
    
            break;
    
        default:
    
            printf("You have selected wrong option\n");
        }
}



int main()
{
    printf("*******************************************************************************\n");
    printf("*******************************************************************************\n");
    
    printf("\t\tWELCOME TO IRCTC BOOKING PORTAL\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("--------------------------------------------------------------------------------\n");
    Information();
    States();
    fareofbooking();
    pay();
    printf("________________________________________________________________________________\n");
    printf("________________________________________________________________________________\n");
    printf("________________________________________________________________________________-\n");
    printf("\t\t********THANK YOU FOR CHOOSING US.HAVE A SAFE AND HAPPY JOURNEY*****\n");
    printf("_________________________________________________________________________________\n");
    printf("__________________________________________________________________________________\n");
    printf("___________________________________________________________________________________\n");

    return 0;
}