

PROPERTY(type, varName) \
private:\
	type varName_;\
public: \
	type varName()\
	{\
		return varName_;\
	}\
	void set##varName(type value)\
	{\
		varName##_ = value;\
	}
