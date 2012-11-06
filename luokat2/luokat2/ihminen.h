class ihminen {
public:

	ihminen(int pain, int pit);

	void setPaino(int p);
	void setPituus(int p);
	int getPituus();
	int getPaino(); 
	int getPi();
private:
	int paino;
	int pituus;
	int painoindeksi;
};