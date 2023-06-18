#include "Pair.h"

Pair::Pair(int first, double second) {//êîíñòðóêòîð ñ ïàðàìåòðàìè
	this->first = first;
	this->second = second;
}
istream& operator>>(istream& in, Pair& m_pair) {//ïåðåãðóçêà îïåðàòîðà ââîäà
	in >> m_pair.first;
	in >> m_pair.second;
	return in;
}
ostream& operator<<(ostream& out, const Pair& m_pair) {//ïåðåãðóçêà îïåðàòîðà âûâîäà
	return (out << m_pair.first << " : " << m_pair.second);
}
Pair::Pair() {//êîíñòðóêòîð áåç ïàðàìåòðîâ
	first = 0;
	second = 0;
}
Pair::~Pair() {//äåñòðóêòîð
}
Pair::Pair(const Pair& m_pair) {//êîíñòðóêòîð êîïèðîâàíèÿ
	first = m_pair.first;
	second = m_pair.second;
}
Pair& Pair::operator=(const Pair& m_pair) {//ïåðåãðóçêà îïåðàòîðà ïðèñâàèâàíèÿ
	if (&m_pair != this) {
		first = m_pair.first;
		second = m_pair.second;
	}
	return *this;
}
Pair Pair::operator-(const Pair& m_pair) {//ïåðåãðóçêà îïåðàòîðà âû÷èòàíèÿ
	Pair result(first - m_pair.first, second - m_pair.second);
	return result;

}
Pair& Pair::operator+(int first) {//ïåðåãðóçêà îïåðàòîðà ñëîæåíèÿ - öåëûé àðãóìåíò
	this->first += first;
	return *this;
}
Pair& Pair::operator+(double second) {//ïåðåãðóçêà îïåðàòîðà ñëîæåíèÿ - äðîáíûé àðãóìåíò
	this->second += second;
	return *this;
}
Pair& Pair::operator++() {//ïåðåãðóçêà îïåðàòîðà ++ ïðåôèêñ
	++first;
	++second;
	return *this;
}
Pair Pair::operator ++(int) {//ïåðåãðóçêà îïåðàòîðà ++ ïîñòôèêñ
	Pair temp = *this;
	this->first++;
	this->second++;
	return temp;//ñíà÷àëà íóæíî âûâåñòè áåç èçìåíåíèé
}

int Pair::GetFirst() const {
	return first;
}

double Pair::GetSecond() const {
	return second;
}

bool operator < (const Pair& pair1, const Pair& pair) {
	return (pair1.GetFirst() + pair1.GetSecond() < pair.GetFirst() + pair.GetSecond());
}

Pair& Pair::operator + (const Pair& m_pair) {
	first += m_pair.first;
	second += m_pair.second;
	return *this;
}

void Pair::SetFirst(int m_first) {
	first = m_first;
}

void Pair::SetSecond(double m_second) {
	second = m_second;
}}