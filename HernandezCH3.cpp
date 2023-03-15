#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const float  BITCOIN_PER_DOLLAR = 0.00002306,
		         ETHEREUM_PER_DOLLAR = 0.01122814,
		         DOGECOIN_PER_DOLLAR = 2.07961078,
		         CARDANO_PER_DOLLAR = 0.48910811;
		  
		  float 
		        user_amount,
		        dollar_to_bitcoin,
		        dollar_to_ethereum,
		        dollar_to_dogecoin,
		        dollar_to_cardano;
		        
		    cout << endl;
		    cout << "Enter The U.S. Dollar Amount: ";
		    cin  >> user_amount;
		    
		  dollar_to_bitcoin = user_amount * BITCOIN_PER_DOLLAR;
		  dollar_to_ethereum = user_amount * ETHEREUM_PER_DOLLAR;
		  dollar_to_dogecoin = user_amount * DOGECOIN_PER_DOLLAR;
		  dollar_to_cardano = user_amount * CARDANO_PER_DOLLAR;
		  
		  cout << setprecision(2) << fixed << endl;
		  cout << user_amount << " USD Equals:" << endl;
		  cout << '\n'         << endl;
		  cout << "Bitcoin  "  << setw(20)<< dollar_to_bitcoin << setw(10) << "BTC" << endl;
		  cout << "Ethereum Classic" << setw(13)<< dollar_to_ethereum << setw(10)<< "ETC" <<endl;
		  cout << "Dogecoin  " << setw(20)<< dollar_to_dogecoin << setw(10)<<  "DOGE" << endl;
		  cout << "Cardano  "  << setw(20)<< dollar_to_cardano << setw(10)<< "ADA" <<endl;
		  cout << '\n'         << endl;
		  
		  return 0;
}
