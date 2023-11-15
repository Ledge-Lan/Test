#include <iostream>

using namespace std;

class Cinema{
    public:
    string movieTitle;
    int movieAmount;
    float price;
    string timeframes[5];
    

};

Cinema CinemaOne;
Cinema CinemaTwo;
Cinema CinemaThree;
Cinema CinemaFour;
Cinema CinemaFive;
Cinema CinemaSix;

bool confirm();
void movieToCinema(int cinemaChoice, string movie);

int main(){
    int row, column;
    int movieAmount, cinemaChoice;
    
        do {
        cout << "A D M I N  S E T U P\n";
        cout << "Enter Seat Dimensions: ";
        cout << "\nRows: ";
        cin >> row;
        cout << "\nColumns: ";
        cin >> column;
        } while(!confirm());
        
        do {
        cout << "How many movies would you like to be displayed?\n";
        cin >> movieAmount;
        } while(!confirm());
        
        string movies[movieAmount];
        
        do{
        cout << "What Movies will be displayed?";
            for(int i = 0; i < movieAmount; i++){
                cout << "\n" << i+1 << ". ";
                cin >> movies[i];
            }
        } while(!confirm());
        
        do {
            cout << "Which Cinemas will these movies be screened?\n";
            for(int i = 0; i < movieAmount; i++){
                cout << movies[i] << endl;
                cout << "1. Cinema One      4. Cinema Four\n"
                        "2. Cinema Two      5. Cinema Five\n"
                        "3. Cinema Three    6. Cinema Six";
                cin >> cinemaChoice;
                if(cinemaChoice > 6){
                    break;
                }
                movieToCinema(cinemaChoice, movies[i]);
            }    
        } while(!confirm());
        
}


bool confirm(){
    char YN;
    
    cout << "Confirm? (y/n)\n";
    cin >> YN;
    if(YN == 'y'){
        return true;
    } else {
        return false;
    }
}

void movieToCinema(int cinemaChoice, string movie){
    int amountOfMovie;
    
    switch(cinemaChoice){
        case 1:
        CinemaOne.movieTitle = movie;
        break;
        
        case 2:
        CinemaTwo.movieTitle = movie;
        break;
        
        case 3:
        CinemaThree.movieTitle = movie;
        break;
        
        case 4:
        CinemaFour.movieTitle = movie;
        break;
        
        case 5:
        CinemaFive.movieTitle = movie;
        break;
        
        case 6:
        CinemaSix.movieTitle = movie;
        break;

    }
}


    
