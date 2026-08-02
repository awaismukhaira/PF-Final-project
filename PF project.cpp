#include<iostream>
#include<string>
#include<fstream>
using namespace std;

string suspectNames[3];
string Gender[3];
string hairColor[3];
string shirtColor[3];
string pentColor[3];
string shoeColor[3];
string wearHat[3];
int scores[3];

void fetchData(){
	ifstream data("suspect.txt");
	for(int i=0;i<=2;i++){
		data>>suspectNames[i];
		data>>Gender[i];
		data>>hairColor[i];
		data>>shirtColor[i];
		data>>pentColor[i];
		data>>shoeColor[i];
		data>>wearHat[i];
		data>>scores[i];
	}
	data.close();
}

void displaySuspect(){
	fetchData();
	cout<<"\n========== SUSPECT LIST =========="<<endl;
	
    for(int i=0; i<3; i++) {
        cout<<i+1<<". Name: "<<suspectNames[i]<<endl;
        cout<<"   Gender: "<<Gender[i]<<endl;
        cout<<"   Hair Color: "<<hairColor[i]<<endl;
        cout<<"   Shirt Color: "<<shirtColor[i]<<endl;
        cout<<"   Pant Color: "<<pentColor[i]<<endl;
        cout<<"   Shoe Color: "<<shoeColor[i]<<endl;
        cout<<"   Wears Hat: "<<wearHat[i]<<endl;
        cout<<"   Score: "<<scores[i]<<endl;
        cout<<"----------------------------------------"<<endl;
    }
    
}

void investigateClues(){
	cout<<"Gender (male or female): ";
	cin.ignore();
	string gender;
	getline(cin,gender);
	for(int i=0; i<3; i++){
		if(gender==Gender[i]){
			scores[i]++;
		}
	}
	cout<<"Hair Color (black or brown): ";
	string hair;
	getline(cin,hair);
	for(int i=0; i<3; i++){
		if(hair==hairColor[i]){
			scores[i]++;
		}
	}
	cout<<"Shirt Color (black, gray or white): ";
	string shirt;
	getline(cin,shirt);
	for(int i=0; i<3; i++){
		if(shirt==shirtColor[i]){
			scores[i]++;
		}
	}
	cout<<"Pent Color (black, blue): ";
	string pent;
	getline(cin,pent);
	for(int i=0; i<3; i++){
		if(pent==pentColor[i]){
			scores[i]++;
		}
	}
	cout<<"Shoe Color (black or brown): ";
	string shoe;
	getline(cin,shoe);
	for(int i=0; i<3; i++){
		if(shoe==shoeColor[i]){
			scores[i]++;
		}
	}
	cout<<"Wear Hat (yes or no): ";
	string hat;
	getline(cin,hat);
	for(int i=0; i<3; i++){
		if(hat==wearHat[i]){
			scores[i]++;
		}
	}
	cout<<"\n--------Scores of Suspects---------"<<endl;
		cout<<"Zaib: "<<scores[0]<<endl;
		cout<<"Jawad: "<<scores[1]<<endl;
		cout<<"Rimsha: "<<scores[2]<<endl;
	cout<<"======================================\n"<<endl;
}
 void evidenceBasedScoring(){
    cout<<"\n========== EVIDENCE-BASED SCORING =========="<<endl;
    
    for(int i=0; i<3; i++) {
        int additionalScore = 0;
        if(hairColor[i] =="black") additionalScore +=3;
        if(shirtColor[i]=="black") additionalScore +=2;
        if(pentColor[i] =="black") additionalScore += 2;
        if(shoeColor[i]=="black") additionalScore +=2;
        if(wearHat[i] =="yes") additionalScore +=3;
        if(Gender[i]=="male") additionalScore +=1;
        
        scores[i] += additionalScore;
        cout<<"Added "<<additionalScore<<" points to "<<suspectNames[i]<<endl;
    }
    cout<<"Scores updated successfully!"<<endl;
 }
 void culpritIdentification(){
    cout<<"\n========== CULPRIT IDENTIFICATION =========="<<endl;
    
    int maxScore = -1;
    int culpritIndex = -1;
    bool tie = false;
    
    for(int i=0; i<3; i++) {
        cout<<suspectNames[i]<<": "<<scores[i]<<" points"<<endl;
        
        if(scores[i] > maxScore) {
            maxScore = scores[i];
            culpritIndex = i;
        }
    }
    
    cout<<endl;
    if(maxScore == 0) {
        cout<<"No evidence collected yet! Investigate clues first."<<endl;
        cout<<"Hint: Start investigating clues to build evidence."<<endl;
    }
    else {
        cout<<"========================================"<<endl;
        cout<<"MOST PROBABLE CULPRIT: "<<suspectNames[culpritIndex]<<endl;
        cout<<"   Score: "<<scores[culpritIndex]<<" points"<<endl;
        cout<<"========================================"<<endl;
    }
		
 }
 void investigationReportGeneration(){
    cout<<"\n========== INVESTIGATION REPORT =========="<<endl;
    
    int maxScore = 0;
    int culpritIndex = -1;
    bool tie = false;
    for(int i=0; i<3; i++) {
        if(scores[i] > maxScore) {
            maxScore = scores[i];
            culpritIndex = i;
            tie = false;
        }
        else if(scores[i] == maxScore && scores[i] > 0) {
            tie = true;
        }
    }
    cout<<"CASE STATUS: ";
    if(maxScore == 0) {
        cout<<"Unsolved No evidence collected"<<endl;
    }
    else if(tie) {
        cout<<"INCONCLUSIVE Tie between suspects"<<endl;
    }
    else {
        cout<<"SOLVED"<<endl;
    }
    cout<<"\n----------------------------------------"<<endl;
    cout<<"SUSPECT DETAILS WITH SCORES:"<<endl;
    cout<<"----------------------------------------"<<endl;
    
    for(int i=0; i<3; i++) {
        cout<<"Name: "<<suspectNames[i]<<endl;
        cout<<"  Gender: "<<Gender[i]<<endl;
        cout<<"  Hair: "<<hairColor[i]<<endl;
        cout<<"  Shirt: "<<shirtColor[i]<<endl;
        cout<<"  Pants: "<<pentColor[i]<<endl;
        cout<<"  Shoes: "<<shoeColor[i]<<endl;
        cout<<"  Hat: "<<wearHat[i]<<endl;
        cout<<"  Score: "<<scores[i]<<" points"<<endl;
        cout<<"----------------------------------------"<<endl;
    }
    
    if(maxScore> 0&& !tie) {
        cout<<"\nPRIMARY SUSPECT: "<<suspectNames[culpritIndex]<<endl;
        cout<<"   Score: "<<scores[culpritIndex]<<" points"<<endl;
    }
    
    cout<<"\nREPORT GENERATED SUCCESSFULLY!"<<endl;
    cout<<"========================================="<<endl;
}
 void suspectSearch(){
 	string name;
 	cout<<"==============Search Suspect============="<<endl;
 	cout<<"Enter Name: ";
 	cin>>name;
 	int suspectIndex=-1;
 for(int i=0;i<3;i++){
 	if(suspectNames[i]==name){
 		suspectIndex=i;
	 }
 }
 	if(suspectIndex>-1){
 		cout<<"Name: "<<suspectNames[suspectIndex]<<endl;
        cout<<"  Gender: "<<Gender[suspectIndex]<<endl;
        cout<<"  Hair: "<<hairColor[suspectIndex]<<endl;
        cout<<"  Shirt: "<<shirtColor[suspectIndex]<<endl;
        cout<<"  Pants: "<<pentColor[suspectIndex]<<endl;
        cout<<"  Shoes: "<<shoeColor[suspectIndex]<<endl;
        cout<<"  Hat: "<<wearHat[suspectIndex]<<endl;
        cout<<"  Score: "<<scores[suspectIndex]<<" points"<<endl;
        cout<<"===================================="<<endl;
	 }
	 else 
	 cout<<"Suspect not found"<<endl;
 }
 
int main(){
	int choice;
	cout<<"\n========== CASE FILE =========="<<endl;
    cout<<"CASE: The Missing Diamond Necklace\n"<<endl;
    cout<<"A valuable diamond necklace was stolen from a jewelry store."<<endl;
    cout<<"The CCTV footage is blurry and the suspect's face cannot be identified."<<endl;
    cout<<"A security guard briefly saw the suspect before they escaped."<<endl;
    cout<<"Investigators collected several clues from the crime scene."<<endl;
    cout<<"Use the available evidence to build a suspect profile."<<endl;
    cout<<"========================================"<<endl<<endl;
	
	do{
	cout<<"========== DIGITAL DETECTIVE SYSTEM =========="<<endl;
	cout<<"1. Display Suspect List"<<endl;
	cout<<"2. Investigate Clues"<<endl;
	cout<<"3. Evidence-Based Scoring System"<<endl;
	cout<<"4. Culprit Identification"<<endl;
	cout<<"5. Investigation Report Generation"<<endl;
	cout<<"6. Suspect Search"<<endl;
	cout<<"7. Multiple Cases (Future Enhancement)"<<endl;
	cout<<"8. Exit"<<endl;
	cout<<"Enter Choice: ";
	cin>>choice;
	cout<<"=============================================="<<endl;
	if(choice==1){
		displaySuspect();
	}
	else if(choice==2){
		investigateClues();
	}
	else if(choice==3){
		evidenceBasedScoring();
	}
	else if(choice==4){
		culpritIdentification();
	}
	else if(choice==5){
		investigationReportGeneration();
	}
	else if(choice==6){
		suspectSearch();
	}
	else if(choice==7){
		cout<<"Multiple Cases (Future Enhancement)"<<endl;
	}
	else if(choice==8){
		cout<<"Exiting System..."<<endl;
	}
	else 
		cout<<"Invalid Choice"<<endl;
}while(choice!=8);

	return 0;
}

