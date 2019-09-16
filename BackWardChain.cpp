#include "BackWardChain.h"
#include <iostream>
#include <cstdlib>
#include<map>
using namespace std;

BackWardChain::BackWardChain()
{
        cout<<"backward chaining init.\n";

        //Variable list
        var v1("coma","NI","");
        varlt[0] = v1;
        var v2("res_issue","NI","");
        varlt[1] = v2;
        var v3("lab_test","NI","");
        varlt[2] = v3;
        var v4("ocular_issue","NI","");
        varlt[3] = v4;
        var v5("cardiac_issue","NI","");
        varlt[4] = v5;
        var v6("skin_issue","NI","");
        varlt[5] = v6;
        var v7("gastro_iss","NI","");
        varlt[6] = v7;
        var v8("cns_issue","NI","");
        varlt[7] = v8;
        var v9("blood_issue","NI","");
        varlt[8] = v9;
        var v10("liver_issue","NI","");
        varlt[9] = v10;
        var v11("fever","NI","");
        varlt[10] = v11;

        //initilize conclusion list
        con c1(10,"observation1","");
        conlt[0] = c1;
        con c2(20,"poison","");
        conlt[1] = c2;
        con c3(30,"poison","");
        conlt[2] = c3;
        con c4(40,"poison","");
        conlt[3] = c4;
        con c5(50,"observation2","");
        conlt[4] = c5;
        con c6(60,"poison","");
        conlt[5] = c6;
        con c7(70,"observation3","");
        conlt[6] = c7;
        con c8(80,"poison","");
        conlt[7] = c8;
        con c9(90,"poison","");
        conlt[8] = c9;
        con c10(100,"observation4","");
        conlt[9] = c10;
        con c11(110,"poison","");
        conlt[10] = c11;
        con c12(120,"observation5","");
        conlt[11] = c12;
        con c13(130,"poison","");
        conlt[12] = c13;
        con c14(140,"observation6","");
        conlt[13] = c14;
        con c15(150,"poison","");
        conlt[14] = c15;
        con c16(160,"observation7","");
        conlt[15] = c16;
        con c17(170,"poison","");
        conlt[16] = c17;
        con c18(180,"observation8","");
        conlt[17] = c18;
        con c19(190,"poison","");
        conlt[18] = c19;
        con c20(200,"observation9","");
        conlt[19] = c20;
        con c21(210,"poison","");
        conlt[20] = c21;
        con c22(220,"observation10","");
        conlt[21] = c22;
        con c23(230,"poison","");
        conlt[22] = c23;
        con c24(240,"poison","");
        conlt[23] = c24;
        con c25(250,"poison","");
        conlt[24] = c25;

        //initialize clause variable list
        for(int i=0; i< 277; i++){
            clvarlt[i] = "";
        }

        clvarlt[1] ="coma";
        clvarlt[2] ="res_issue";
        clvarlt[3] ="lab_test";
        clvarlt[12] ="observation1";
        clvarlt[13] ="ocular_issue";
        clvarlt[23] ="observation1";
        clvarlt[24] ="ocular_issue";
        clvarlt[25] ="cardiac_issue";
        clvarlt[26] ="skin_issue";
        clvarlt[34] ="observation1";
        clvarlt[35] ="ocular_issue";
        clvarlt[36] ="cardiac_issue";
        clvarlt[37] ="skin_issue";
        clvarlt[45] ="coma";
        clvarlt[46] ="res_issue";
        clvarlt[47] ="ocular_issue";
        clvarlt[48] ="lab_test";
        clvarlt[56] ="observation2";
        clvarlt[57]="cardiac_issue";
        clvarlt[67] = "coma";
        clvarlt[68] = "cardiac_issue";
        clvarlt[69] = "ocular_issue";
        clvarlt[70] = "skin_issue";
        clvarlt[71] = "lab_test";
        clvarlt[78] = "observation3";
        clvarlt[79] = "res_issue";
        clvarlt[89] = "observation3";
        clvarlt[90] = "res_issue";
        clvarlt[91] = "cns_issue";
        clvarlt[100] = "coma";
        clvarlt[101] = "cardiac_issue";
        clvarlt[102] = "ocular_issue";
        clvarlt[103] = "res_issue";
        clvarlt[104] = "lab_test";
        clvarlt[111] = "observation4";
        clvarlt[112] = "skin_issue";
        clvarlt[113] = "gastro_issue";
        clvarlt[122] = "coma";
        clvarlt[123] = "cardiac_issue";
        clvarlt[124] = "oral_issue";
        clvarlt[125] = "lab_test";
        clvarlt[133] = "observation5";
        clvarlt[134] = "cns_issue";
        clvarlt[144] = "coma";
        clvarlt[145] = "cardiac_issue";
        clvarlt[146] = "ocular_issue";
        clvarlt[147] = "lab_test";
        //clvarlt[155] = "observation";
        clvarlt[155] = "observation6";
        clvarlt[156] = "oral_issue";
        clvarlt[157] = "cns_issue";
        clvarlt[166] = "coma";
        clvarlt[167] = "cardiac_issue";
        clvarlt[168] = "gastro_issue";
        clvarlt[179] = "lab_test";
        clvarlt[177] = "observation7";
        clvarlt[179] = "res_issue";
        clvarlt[180] = "cns_issue";
        clvarlt[188] = "coma";
        clvarlt[189] = "cardiac_issue";
        clvarlt[190] = "gastro_issue";
        clvarlt[191] = "lab_test";
        clvarlt[199] = "observation8";
        clvarlt[200] = "oral_issue";
        clvarlt[201] = "cns_issue";
        clvarlt[210] = "coma";
        clvarlt[211] = "cardiac_issue";
        clvarlt[212] = "gastro_issue";
        clvarlt[213] = "blood_ca";
        clvarlt[214] = "lab_test";
        clvarlt[221] = "observation9";
        clvarlt[222] = "liver_issue";
        clvarlt[232] = "coma";
        clvarlt[233] = "cardiac_issue";
        clvarlt[234] = "gastro_issue";
        clvarlt[235] = "blood_ca";
        clvarlt[236] = "lab_test";
        clvarlt[243] = "observation10";
        clvarlt[244] = "liver_issue";
        clvarlt[254] = "coma";
        clvarlt[255] = "cardiac_issue";
        clvarlt[256] = "gastro_issue";
        clvarlt[257] = "oral_issue";
        clvarlt[258] = "fever";
        clvarlt[265] = "coma";
        clvarlt[266] = "cardiac_issue";
        clvarlt[267] = "gastro_issue";
        clvarlt[268] = "skin_issue";
        clvarlt[269] = "res_issue";
        clvarlt[270] = "cns_issue";

        /*
        clvarlt[156] = "observation6";
        clvarlt[157] = "oral_issue";
        clvarlt[158] = "cns_issue";
        clvarlt[167] = "coma";
        clvarlt[168] = "cardiac_issue";
        clvarlt[169] = "gastro_issue";
        clvarlt[170] = "lab_test";
        clvarlt[178] = "observation";
        clvarlt[179] = "res_issue";
        clvarlt[180] = "cns_issue";
        clvarlt[189] = "coma";
        clvarlt[190] = "cardiac_issue";
        clvarlt[191] = "gastro_issue";
        clvarlt[192] = "lab_test";
        clvarlt[200] = "observation";
        clvarlt[201] = "oral_issue";
        clvarlt[202] = "cns_issue";
        clvarlt[211] = "coma";
        clvarlt[212] = "cardiac_issue";
        clvarlt[213] = "gastro_issue";
        clvarlt[214] = "blood_ca";
        clvarlt[215] = "lab_test";
        clvarlt[222] = "observation";
        clvarlt[223] = "liver_issue";
        clvarlt[233] = "coma";
        clvarlt[234] = "cardiac_issue";
        clvarlt[235] = "gastro_issue";
        clvarlt[236] = "blood_ca";
        clvarlt[237] = "lab_test";
        clvarlt[244] = "observation";
        clvarlt[245] = "liver_issue";
        clvarlt[255] = "coma";
        clvarlt[256] = "cardiac_issue";
        clvarlt[257] = "gastro_issue";
        clvarlt[258] = "oral_issue";
        clvarlt[259] = "fever";
        clvarlt[266] = "coma";
        clvarlt[267] = "cardiac_issue";
        clvarlt[268] = "gastro_issue";
        clvarlt[269] = "skin_issue";
        clvarlt[270] = "res_issue";
        clvarlt[271] = "cns_issue";
        */


}

void BackWardChain::pushIntoConlusionStack(int rulesNum, int clauseNum){
    constack temp (rulesNum, clauseNum);
    constaclt.push(temp);
    //cout << "stack size is " << constaclt.size() << endl;
}

//returns location of the varable list , if not there return -1;
int BackWardChain::checkClauseNum(string n){
    //cout << "go into checkClauseNum function " << n << endl;
    for(int i=0; i< 11; i++){
        //cout<<"variable index " << i << " name is " << varlt[i].getName()<<endl;
        if(varlt[i].getName() == n){
            if(varlt[i].getStatus() == "NI"){
                cout << "Please enter answer of "<< varlt[i].getName();
                string data;
                cin >> data;
                varlt[i].setValue(data);
                varlt[i].setStatus("I");
            }
        return i;
        }
    }
    return -1;
}

//get rule number of the observation
int BackWardChain::getNumOfConslusionList(string n){
    //cout << "check conclusion list of : " << n <<" ,to return rule number "<< endl;
    for(int i=0; i<25; i++){
        if(conlt[i].getC_name() == n){
            //cout << " rule number is : "<<conlt[i].getR_num() <<endl;
            return conlt[i].getR_num();
        }
    }
    return -1;
}

//assign value to variable
void BackWardChain::assignStatus(string n){
    for(int i=0; i<11; i++){
    //for(var i : varlt){
       if(varlt[i].getName() == n){
           //cout << "***" << varlt[i].getName() << " -- " << n << endl;
            //cout << "status is " << varlt[i].getStatus()<<endl;
            if(varlt[i].getStatus() == "NI"){
                cout << "Please enter answer of "<< varlt[i].getName() << ":  ";
                string data;
                cin >> data;
                varlt[i].setValue(data);
                varlt[i].setStatus("I");
            }
        break;
        }
    }
}


string BackWardChain::getVariableListValue(string n){
    bool found = true;
    //cout <<"go into the getVariableListValue\n";
    string res = "";
    for(int i=0; i<11; i++){
   // for(var i: varlt){
        if(varlt[i].getName() == n){
                if(varlt[i].getStatus() == "NI"){
                cout << "Please enter answer of "<< varlt[i].getName() << ":  ";
                string data;
                cin >> data;
                varlt[i].setValue(data);
                varlt[i].setStatus("I");
                return data;
                }
                else{
                    return varlt[i].getValue();
                }
        }
  //      found == false;
    }
    //check the value in the conclusion list
    //if(found == false){
        for(int j=0; j<25; j++){
            if(conlt[j].getC_name() == n){
                return conlt[j].getC_value();
            }
        }
    //}
   // return res;
}

//check NI status and set values
void BackWardChain::BackWardChain::start(){
    for(con conlusion : conlt){
        //cout <<" conclusion num is :"<< conclusion.getR_num() <<endl;
        //cout << "conclusion name is :" << conlusion.getC_name() <<endl;
        if(conlusion.getC_name() == "poison"){
            int ruleNumTemp = conlusion.getR_num();
            int clauseNumTemp = 11*(ruleNumTemp/10 -1) + 1;
            pushIntoConlusionStack(ruleNumTemp, clauseNumTemp);
            //cout<<"1. stack size is :"<< constaclt.size()<<endl;
            //check if all values in the clause variable list
            string element = clvarlt[clauseNumTemp];
            //cout<<"clause is :"<< element <<endl;

            while(element != ""){
                int locationOfVarlt = checkClauseNum(element);
                cout<<"location is " << locationOfVarlt<<endl;
                if(locationOfVarlt == -1){ // if meet the observation
                    int ruleNum = getNumOfConslusionList(element);
                    pushIntoConlusionStack(ruleNum, 11*(ruleNum/10 -1) + 1);
                    //cout<<"2. stack size is :"<< constaclt.size()<<endl;
                    break;
                }
                else{//if meet the condition
                    //check if it's value "NI", and set value
                    //cout<<"assign value at location "<<locationOfVarlt <<endl ;
                    //cout<< "name is "<< clvarlt[locationOfVarlt] <<endl;
                    assignStatus(clvarlt[locationOfVarlt]);
                    clauseNumTemp++;
                    element = clvarlt[clauseNumTemp];
                    //cout<<"clause index is :"<< clauseNumTemp <<endl;
                }
            }
            //then need to check the knowledge base with rule number
            //pass temp value array with name and values  return two
            //use a function to save all conditon and it's value in to temp object
            //cout<<"3. stack size is :"<< constaclt.size()<<endl;
            while(constaclt.size() != 0){
                constack topStack = constaclt.top();
                constaclt.pop();
                int r = topStack.getR_num();
                int c = topStack.getCl_num();

                map<string,string> conditions;
                for(int i=c; i<c+11; i++){
                    string s = clvarlt[i];
                    //cout << "!!! to chekech value " << s << endl;
                    if(s != ""){
                        string v = getVariableListValue(s);
                        conditions.insert(pair<string,string>(s, v));
                    }
                    else{
                        break;
                    }
                }
                cout << "map size is :" << conditions.size()<<endl;
                var ruleResult = checkKnowledgeBase(r, conditions);
                cout << "!!!*** " << ruleResult.getStatus() << endl;
                if(ruleResult.getStatus() == "true"){
                    if(ruleResult.getName() == "poison"){
                        cout<<"Find poison "<< ruleResult.getValue()<< endl;
                        constaclt.pop();
                        break;
                    }
                    else{// if return observation value then need to set the value into the clause variable list
                        cout<< "Find observation " << ruleResult.getValue()<< endl;
                        conlt[(r/10)-1].setC_value(ruleResult.getValue());
                        //cout<<"double check if the observasion value was store: index " << (r/10)-1 << " ," <<conlt[(r/10)-1].getC_value() << endl;
                    }
                }
                else{//rule is false
                    break;
                }
            }
        }
        else{//if it's observation
            //cout<<"skip"<<endl;
            continue;
        }

    }

}


bool BackWardChain::matchVariableList(string item, string target){
    for(var i : varlt){
        if(i.getName() == item){
            if(i.getValue() != target){
                return true;
            }
        }
    }
    return false;
}


bool BackWardChain::isInVariableList(string v){
    for(var i : varlt){
        if(i.getName() == v){
            return true;
        }
    }

    for(con j : conlt){
        if(j.getC_name() == v)
            return false;
    }
    //test this return
    return false;
}


var BackWardChain::checkKnowledgeBase(int ruleNum, map<string,string> &vMap){
    var res("","false","");

    //result = matchVariableList(string , string target);
    if(ruleNum == 10){//Rule #10
        if(vMap.size() < 3){
            return res;
        }
        if(vMap.find("coma")->second == "yes" && vMap.find("res_issue")->second == "tachypnea"
           && vMap.find("lab_test")->second == "yes"){
            res.setStatus("true");
            res.setName("observation1");
            res.setValue("increased_anion_gap");
            return res;
        }
    }

    if(ruleNum == 20){//Rule #20
        if(vMap.size() < 2){
            return res;
        }
        cout<<"$$$--->"<<vMap.find("observation1")->second <<endl;
        if( vMap.find("observation1")->second == "increased_anion_gap" &&  vMap.find("ocular_issue")->second =="retinal_hyperemia"){
            res.setStatus("true");
            res.setName("poison");
            res.setValue("methanol");
            return res;
        }
    }

    if(ruleNum == 30){//Rule #30
         if(vMap.size() < 4){
            return res;
         }
        if( vMap.find("observation1")->second == "increased_anion_gap" &&  vMap.find("ocular_issue")->second ==  "normal_pupil"
            &&  vMap.find("cardiac_issue")->second == "tachycardia" &&  vMap.find("skin_issue")->second == "reddening_skin"){
            res.setStatus("true");
            res.setName("poison");
            res.setValue("carbon_monoxide");
            return res;
        }
    }

    if(ruleNum == 40){//Rule #40
         if(vMap.size() < 4){
            return res;
        }
        if( vMap.find("observation1")->second == "increased_anion_gap" &&  vMap.find("ocular_issue")->second == "normal_pupil"
            &&  vMap.find("cardiac_issue")->second == "tachycardia" &&  vMap.find("skin_issue")->second == "normal_skin"){
            res.setStatus("true");
            res.setName("poison");
            res.setValue("aspirin");
            return res;
        }
    }

    if(ruleNum == 50){//Rule #50
         if(vMap.size() < 4){
            return res;
        }
        if( vMap.find("coma")->second == "yes" &&  vMap.find("res_issue")->second == " depressed_respiration"
            &&  vMap.find("ocular_issue")->second == "narrowed_pupil" &&  vMap.find("lab_test")->second == "yes"){
            res.setStatus("true");
            res.setName("observation2");
            res.setValue("rhabdomyolysis");
            return res;
        }
    }

    if(ruleNum == 60){//Rule #60
        if(vMap.size() < 2){
            return res;
        }
        if( vMap.find("observation2")->second == "rhabdomyolysis" &&  vMap.find("cardiac_issue")->second == "bradycardia"){
            res.setStatus("true");
            res.setName("poison");
            res.setValue("opioids");
            return res;
        }
    }

    if(ruleNum == 70){//Rule #70
        if(vMap.size() < 5){
            return res;
        }
        if( vMap.find("coma")->second == "no" &&  vMap.find("cardiac_issue")->second == "tachycardia"
            &&  vMap.find("ocular_issue")->second == "dilated_pupil" &&  vMap.find("skin_issue")->second == "excessive_sweating"
            &&  vMap.find("lab_test")->second == "yes"){
            res.setStatus("true");
            res.setName("observation3");
            res.setValue("pro_grs");
            return res;
        }
    }

    if(ruleNum == 80){//Rule #80
        if(vMap.size() < 2){
            return res;
        }
        if( vMap.find("observation3")->second == "pro_grs" &&  vMap.find("res_issue")->second == "tachypnea"){
            res.setStatus("true");
            res.setName("poison");
            res.setValue("amphetamine");
            return res;
        }
    }

    if(ruleNum == 90){//Rule #90
        if(vMap.size() < 3){
            return res;
        }
        if( vMap.find("observation3")->second == "pro_grs" &&  vMap.find("res_issue")->second == "normal"
            &&  vMap.find("cns_issue")->second == "psychosis"){
            res.setStatus("true");
            res.setName("poison");
            res.setValue("cocaine");
            return res;
        }
    }

    if(ruleNum == 100){//Rule #100
        if(vMap.size() < 5){
            return res;
        }
        if( vMap.find("coma")->second == "no" &&  vMap.find("cardiac_issue")->second == "tachycardia"
            &&  vMap.find("ocular_issue")->second == "normal_pupil" &&  vMap.find("res_issue")->second == "tachypnea"
            &&  vMap.find("lab_test")->second == "yes"){
            res.setStatus("true");
            res.setName("observation4");
            res.setValue("pulmonary_edema");
            return res;
        }
    }

    if(ruleNum == 110){//Rule #110
        if(vMap.size() < 3){
            return res;
        }
        if( vMap.find("observation4")->second == "pulmonary_edema" &&  vMap.find("skin_issue")->second == "reddening_skin"
            &&  vMap.find("gastro_issue")->second == "nausea"){
            res.setStatus("true");
            res.setName("poison");
            res.setValue("cyanide");
            return res;
        }
    }

    if(ruleNum == 120){//Rule #120
        if(vMap.size() < 4){
            return res;
        }
        if( vMap.find("coma")->second == "no" &&  vMap.find("cardiac_issue")->second == "hypertension"
            &&  vMap.find("oral_issue")->second == "gum_lines" &&  vMap.find("lab_test")->second == "yes"){
            res.setStatus("true");
            res.setName("observation5");
            res.setValue("radiopaque_density");
            return res;
        }
    }

    if(ruleNum == 130){//Rule# 130
        if(vMap.size() < 2){
            return res;
        }
        if( vMap.find("observation5")->second == "radiopaque_density" &&  vMap.find("cns_issue")->second == "peripheral_neuropathy"){
            res.setStatus("true");
            res.setName("poison");
            res.setValue("lead");
            return res;
        }
    }

    if(ruleNum == 140){//Rule# 140
        if(vMap.size() < 4){
            return res;
        }
        if( vMap.find("coma")->second == "no" &&  vMap.find("cardiac_issue")->second == "bradycardia"
           &&  vMap.find("ocular_issue")->second == "narrowed_pupil" &&  vMap.find("lab_test")->second == "yes"){
            res.setStatus("true");
            res.setName("observation6");
            res.setValue("low_plasma_cholinesterase");
            return res;
        }
    }

    if(ruleNum == 150){//Rule# 150
        if(vMap.size() < 3){
            return res;
        }
        if( vMap.find("observation6")->second == "low_plasma_cholinesterase" &&  vMap.find("oral_issue")->second == "extra_saliva"
           &&  vMap.find("cns_issue")->second == "seizure"){
            res.setStatus("true");
            res.setName("poison");
            res.setValue("organophosphate");
            return res;
        }
    }

    if(ruleNum == 160){//Rule# 160
        if(vMap.size() < 4){
            return res;
        }
        if( vMap.find("coma")->second == "no" &&  vMap.find("cardiac_issue")->second == "hypotension"
           &&  vMap.find("gastro_issue")->second == "vomiting" &&  vMap.find("lab_test")->second == "yes"){
            res.setStatus("true");
            res.setName("observation7");
            res.setValue("radiopaque_density");
            return res;
        }
    }

    if(ruleNum == 170){//Rule# 170
        if(vMap.size() < 3){
            return res;
        }
        if( vMap.find("observation7")->second == "radiopaque_density" &&  vMap.find("res_issue")->second == "tachypnea"
           &&  vMap.find("cns_issue")->second == "seizure"){
            res.setStatus("true");
            res.setName("poison");
            res.setValue("hydrocarbon");
            return res;
        }
    }

    if(ruleNum == 180){//Rule# 180
        if(vMap.size() < 4){
            return res;
        }
        if( vMap.find("coma")->second == "no" &&  vMap.find("cardiac_issue")->second == "hypotension"
           &&  vMap.find("gastro_issue")->second == "vomiting_blood" &&  vMap.find("lab_test")->second == "yes"){
            res.setStatus("true");
            res.setName("observation8");
            res.setValue("radiopaque_density");
            return res;
        }
    }

    if(ruleNum == 190){//Rule# 190
        if(vMap.size() < 3){
            return res;
        }
        if( vMap.find("observation8")->second == "radiopaque_density" &&  vMap.find("oral_issue")->second == "gum_lines"
           &&  vMap.find("cns_issue")->second == "peripheral_neuropathy"){
            res.setStatus("true");
            res.setName("poison");
            res.setValue("arsenic");
            return res;
        }
    }

    if(ruleNum == 200){//Rule# 200
        if(vMap.size() < 5){
            return res;
        }
        if( vMap.find("coma")->second == "no" &&  vMap.find("cardiac_issue")->second == "hypotension"
           &&  vMap.find("gastro_issue")->second == "diarrhea" &&  vMap.find("blood_ca")->second == "yes"
           &&  vMap.find("lab_test")->second == "yes"){
            res.setStatus("true");
            res.setName("observation9");
            res.setValue("radiopaque_density");
            return res;
        }
    }

    if(ruleNum == 210){//Rule# 210
        if(vMap.size() < 2){
            return res;
        }
        if( vMap.find("observation9")->second == "radiopaque_density" &&  vMap.find("liver_issue")->second == "yes"){
            res.setStatus("true");
            res.setName("poison");
            res.setValue("iron");
            return res;
        }
    }

    if(ruleNum == 220){//Rule# 220
        if(vMap.size() < 5){
            return res;
        }
        if( vMap.find("coma")->second == "no" &&  vMap.find("cardiac_issue")->second == "hypotension"
           &&  vMap.find("gastro_issue")->second == "diarrhea" &&  vMap.find("blood_ca")->second == "no"
           &&  vMap.find("lab_test")->second == "yes"){
            res.setStatus("true");
            res.setName("observation10");
            res.setValue("rhabdomyolysis");
            return res;
        }
    }

    if(ruleNum == 230){//Rule# 230
        if(vMap.size() < 2){
            return res;
        }
        if( vMap.find("observation10")->second == "rhabdomyolysis" &&  vMap.find("liver_issue")->second == "yes"){
            res.setStatus("true");
            res.setName("poison");
            res.setValue("amatoxin");
            return res;
        }
    }

    if(ruleNum == 240){//Rule# 240
        if(vMap.size() < 5){
            return res;
        }
        if( vMap.find("coma")->second == "no" &&  vMap.find("cardiac_issue")->second == "normal"
           &&  vMap.find("gastro_issue")->second == "diarrhea" &&  vMap.find("oral_issue")->second == "dry_mouth"
           &&  vMap.find("fever")->second == "yes"){
            res.setStatus("true");
            res.setName("poison");
            res.setValue("salmonella");
            return res;
        }
    }

    if(ruleNum == 250){//Rule# 250
        if(vMap.size() < 6){
            return res;
        }
        if( vMap.find("coma")->second == "no" &&  vMap.find("cardiac_issue")->second == "normal"
           &&  vMap.find("gastro_issue")->second == "vomiting" &&  vMap.find("skin_issue")->second == "reddening skin"
           &&  vMap.find("res_issue")->second == "breathing_issue" &&  vMap.find("cns_issue")->second == "peripheral_neuropathy"){
            res.setStatus("true");
            res.setName("poison");
            res.setValue("mercury");
            return res;
        }
    }
    cout<<"*** not match any rules ***\n";
    return res;
}


BackWardChain::~BackWardChain(){
    cout << "The destructor is now running.\n";
}
