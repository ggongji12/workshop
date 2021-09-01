using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using LibLoginValidator;

namespace ConLoginValidator
{
    class Program
    {
        static void Main(string[] args)
        {
            LoginValidator login = new LoginValidator(); //constructor

            int attempt = 0;
            string usrName;
            string pssWord;
            //userName property of username 
            //passWord property of password 
            //authorizeID method of authorization          
            
            while (attempt == 0) 
            {
                Console.WriteLine("Please enter your username: ");
                usrName = Console.ReadLine();
                Console.WriteLine("Please enter your password: ");
                pssWord = Console.ReadLine();
                login.userName = usrName;
                login.passWord = pssWord;
                if (usrName == string.Empty || pssWord == string.Empty)
                {
                    attempt = 0;
                    Console.WriteLine("Please enter your username and password PROPERLY!! "); 
                    Console.WriteLine("Press any key to retry... ");
                    Console.ReadKey();

                }
                else if (login.authorizeID() == false)
                {
                    attempt = 0;
                    Console.WriteLine("Verification Failed! ");
                    Console.WriteLine("Press any key to retry... ");
                    Console.ReadKey();
                }                

                else
                {
                    attempt = 1;
                    Console.WriteLine("Verification Confirmed! ");
                    Console.Write("Press any key to exit... ");
                    Console.ReadKey();
                }                
            }
        }    
    }
}
