using namespace std;
class LogElement {
private:
	bool In1;
	bool In2;
protected:
	bool Res;
public:
	void setIn1(bool newIn1);
	void setIn2(bool newIn2);
	bool getResOr();
	bool getResNot();
	bool getResAnd();
	bool getResNand();
	bool getResNor;
 	bool getResXor;
}; 
void LogElement::setIn1( bool newIn1){
	In1=newIn1;
};
void LogElement::setIn2( bool newIn2){
	In2=newIn2;
};
bool LogElement::getResOr(){
	return In1 or In2;
};	
