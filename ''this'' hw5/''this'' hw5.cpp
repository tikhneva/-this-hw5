#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Parrot {
private:
    int wings;
    int legs_count;
    string nick;
    string plumage_color;
    string eyes_color;

public:
    void SetWings(int wings) {
        if (wings == 2)
        {
            this->wings = wings;
        }
        else
        {
            cout << "Parrot is not able to fly" << endl;
        }
    }
    int GetWings() const {
        return this->wings;
    }

    void SetLegs(int legs) {
        if (legs == 2)
        {
            this->legs_count = legs;
        }
        else
        {
            cout << "Parrot is not able to walk" << endl;
        }
    }
    int GetLegs() const {
        return this->legs_count;
    }

    void SetNick(string nick) {
        this->nick = nick;
    }
    string GetNick() const {
        return this->nick;
    }

    void SetPlumage(string plumage) {
        this->plumage_color = plumage;
    }
    string GetPlumage() const {
        return this->plumage_color;
    }

    void SetEyes(string eyes) {
        this->eyes_color = eyes;
    }
    string GetEyes() const {
        return this->eyes_color;
    }

    void MakeNoize() {
        cout << "ARH!\n";
    }

    void Fly() {
        cout << "ïàïóãà ëåòèòü!\n";
    }

    void Eat(string meal) {
        cout << "ïàïóãà ¿ñòü " << meal << "\n";
    }

    void Sleep() {
        cout << "ïàïóãà ñïèòü\n";
    }

    void Stare() {
        cout << "ïàïóãà ï³äîçð³ëî äèâèòüñÿ íà âàñ\n";
    }
};

class Human {
private:
    string name;
    string eyes_color;
    string hair_color;
    string skill;
    double heigh;
    double beauty;
    double foot_size;

public:
    void SetName(string name) {
        this->name = name;
    }
    string GetName() const {
        return this->name;
    }

    void SetEye(string eye) {
        this->eyes_color = eye;
    }
    string GetEye() const {
        return this->eyes_color;
    }

    void SetHair(string hair) {
        this->hair_color = hair;
    }
    string GetHair() const {
        return this->hair_color;
    }

    void SetSkill(string skill) {
        this->skill = skill;
    }
    string GetSkill() const {
        return this->skill;
    }

    void SetHeigh(double heigh) {
        if (heigh == 163)
        {
            this->heigh = heigh;
        }
        else
        {
            cout << "This is the wrong heigh of this person" << endl;
        }
    }
    double GetHeigh() const {
        return this->heigh;
    }

    void SetBeauty(double beauty) {
        if (beauty >= 100)
        {
            this->beauty = beauty;
        }
        else
        {
            cout << "My human cannot be less than 100% beautiful!!" << endl;
        }
    }
    double GetBeauty() const {
        return this->beauty;
    }

    void SetFoot(double foot) {
        if (foot >= 36 && foot <= 38)
        {
            this->foot_size = foot;
        }
        else
        {
            cout << "Wrong foot size" << endl;
        }
    }
    double GetFoot() const {
        return this->foot_size;
    }

    void PetLover() {
        cout << "äèâè ÿêå êîøåíÿ!\n";
    }

    void LatestNews() {
        cout << "ÿ òîá³ çàðàç òàêå ðîçïîâ³ì!\n";
    }

    void Cooking(string pasta) {
        cout << "*Àë³ñà ãîòóº ñìà÷íó ñòðàâó äëÿ ïîäðóãè*" << pasta << "\n";
    }

    void Lateness() {
        cout << "âèáà÷òå çà çàï³çíåííÿ\n";
    }

    void Hobby() {
        cout << "äàâàé ñþäè ñâîþ ëàïöþ\n";
    }
};

class Room {
private:
    string location;
    string size;
    int window_count;
    int residents_count;
    double comfort;

public:
    void SetLocation(string location) {
        this->location = location;
    }
    string GetLocation() const {
        return this->location;
    }

    void SetSize(string size) {
        this->size = size;
    }
    string GetSize() const {
        return this->size;
    }

    void SetWindow(int window) {
        if (window == 1)
        {
            this->window_count = window;
        }
        else
        {
            cout << "There is only one window" << endl;
        }
    }
    int GetWindow() const {
        return this->window_count;
    }

    void SetResidents(int residents) {
        if (residents >= 1 && residents <= 4)
        {
            this->residents_count = residents;
        }
        else
        {
            cout << "There is no room to breathe" << endl;
        }
    }
    int GetResidents() const {
        return this->residents_count;
    }

    void SetComfort(double comfort) {
        if (comfort >= 6 && comfort <= 10)
        {
            this->comfort = comfort;
        }
        else
        {
            cout << "You would not be able to sleep with this comfort level" << endl;
        }
    }
    double GetComfort() const {
        return this->comfort;
    }

    void SleepPlace() {
        cout << "íà ï³äëîç³ ëåæèòü ìàòðàö, ùîá ñïàòè\n";
    }

    void NeighborhoodNoises() {
        cout << "knock bdjsdchk!\n";
    }

    void Food(string ramyeon) {
        cout << "äåñü á³ëÿ ðàêîâèíè º ðàìüîí" << ramyeon << "\n";
    }

    void AirConditioner() {
        cout << "ôøøøøøø\n";
    }

    void Door() {
        cout << "ãðàº ï³ñíÿ, êîëè â³ä÷³íÿþòüñÿ àáî çà÷èíÿþòüñÿ äâåð³\n";
    }
};

class Phone {
private:
    string phone_model;
    string color;
    double display_diagonol;
    double memory;
    int cameras_count;

public:
    void SetModel(string model) {
        this->phone_model = model;
    }
    string GetModel() const {
        return this->phone_model;
    }

    void SetColor(string color) {
        this->color = color;
    }
    string GetColor() const {
        return this->color;
    }

    void SetDisplay(double display) {
        if (display == 5.4)
        {
            this->display_diagonol = display;
        }
        else
        {
            cout << "Wrong display diagonol" << endl;
        }
    }
    double GetDisplay() const {
        return this->display_diagonol;
    }

    void SetMemory(double memory) {
        if (memory >= 32 && memory <= 128)
        {
            this->memory = memory;
        }
        else
        {
            cout << "You do not have such memory on this phone" << endl;
        }
    }
    double GetMemory() const {
        return this->memory;
    }

    void SetCamera(int camera) {
        if (camera >= 1 && camera <= 2)
        {
            this->cameras_count = camera;
        }
        else
        {
            cout << "You can make pictures only with one or two cameras on this phone" << endl;
        }
    }
    int GetCamera() const {
        return this->cameras_count;
    }

    void CameraClick() {
        cout << "click\n";
    }

    void Photo() {
        cout << "çàðàç ÿê çðîáëþ ãàðíå ôîòî\n";
    }

    void Memory() {
        cout << "íà ïðèñòð¿ íåìàº â³ëüíîãî ì³ñöÿ\n";

    }
    void Calls() {
        cout << "âõ³äíèé äçâ³íîê\n";
    }

    void Music() {
        cout << "I feel the rush" << "\n" << "Addicted to your touch\n";
    }
};

class Music {
private:
    string song_name;
    string kind_of_song;
    string song_author;
    string song_language;
    int song_release;

public:
    void SetSongName(string name) {
        this->song_name = name;
    }
    string GetSongName() const {
        return this->song_name;
    }

    void SetSongKind(string kind) {
        this->kind_of_song = kind;
    }
    string GetSongKind() const {
        return this->kind_of_song;
    }

    void SetAuthor(string author) {
        this->song_author = author;
    }
    string GetAuthor() const {
        return this->song_author;
    }

    void SetLanguage(string language) {
        this->song_language = language;
    }
    string GetLanguage() const {
        return this->song_language;
    }

    void SetSongRelease(int release) {
        if (release == 2022)
        {
            this->song_release = release;
        }
        else
        {
            cout << "Song release year is incorrect" << endl;
        }
    }
    int GetSongRelease() const {
        return this->song_release;
    }

    void Lyrics() {
        cout << "How could I forget" << "\n" << "The day you lied to me\n";
    }

    void Melody() {
        cout << "â³äòâîðþºòüñÿ ïðèºìíà ìåëîä³ÿ\n";
    }

    void Mood() {
        cout << "ÿêà ÷óäîâà ï³ñíÿ\n";
    }

    void Vocabulary() {
        cout << "î, íîâå ñëîâî\n";
    }

    void Headphones() {
        cout << "*ïîêà÷óþ ãîëîâîþ ó ðèòì ìóçèêè*\n";
    }
};

int main()
{
    Parrot myParrot;
    myParrot.wings = 40;
    myParrot.legs_count = 2;
    myParrot.nick = "Sarah";
    myParrot.plumage_color = "red";
    myParrot.eyes_color = "yellow";

    Human myHuman;
    myHuman.heigh = 162; //cm
    myHuman.beauty = 100; //%
    myHuman.foot_size = 37; // EU size
    myHuman.name = "Alice";
    myHuman.eyes_color = "green";
    myHuman.hair_color = "light brown";
    myHuman.skill = "luck";

    Roomm myRoom;
    myRoom.window_count = 1;
    myRoom.residents_count = 2;
    myRoom.location = "Seoul";
    myRoom.size = "very small";
    myRoom.comfort = 2; // 2 out of 10

    Phone myPhone;
    myPhone.display_diagonol = 5.4; //inches
    myPhone.memory = 128;
    myPhone.cameras_count = 2;
    myPhone.phone_model = "IPhone 13 mini";
    myPhone.color = "blue";

    Music myMusic;
    myMusic.song_release = 2022; //year
    myMusic.song_name = "i hate to admit";
    myMusic.kind_of_song = "sad";
    myMusic.song_author = "Bang Chan";
    myMusic.song_language = "English and Korean";


}
