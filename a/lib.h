using namespace std;

class String
{
	char* line;
	int len;

public:

	String(int L = 80);
	String(const char* s);
	String(const String& s);
	~String() { delete[] line; }

	void Fill(const char*);
	
	int Len() { return len; }
	
	void Print() { cout << line; }
	
	//char& Index(int i);
	char& operator [](int i);

	//String& Plus(String&);
	String& operator +=(String&);

	//int EqStr(String& s);
	int operator ==(String& s);

	String operator ~();

	String& operator = (const String& s);
};
