class pelaaja {
public:
	pelaaja() {maalit = 0, syotot = 0;};
	pelaaja(int maalit, int syotot);
	~pelaaja() {};
	void lauo();
	void setmaalit(int maalit);
	void setsyotot(int syotot);
	int getmaalit();
	int getsy�t�t();
private:
	int maalit;
	int syotot;
};