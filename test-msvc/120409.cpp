/*
MSVC 扩展，属于编译方言差异
*/

template<class T>
class Tuple
{
public:
	Tuple(const T* pTup) : m_tup[0](pTup[0]), m_tup[1](pTup[1]), m_tup[2](pTup[2]) {}

protected:
	T m_tup[3];
};

int main() {
	return 0;
}