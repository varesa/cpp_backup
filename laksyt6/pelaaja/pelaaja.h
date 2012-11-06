class pelaaja {
public:
	pelaaja() {maalit = 0, syotot = 0;};
	pelaaja(int maalit, int syotot);
	~pelaaja() {};
	void lauo();
	void setmaalit(int maalit);
	void setsyotot(int syotot);
	int getmaalit();
	int getsyötöt();
private:
	int maalit;
	int syotot;
};