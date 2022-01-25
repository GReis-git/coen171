#ifndef COEN171_QUEEN_H
#define COEN171_QUEEN_H

class Piece {

	protected: // children can access protected variables
		int lrow;
		int lcol;
	
	public:
		int row() const { return lrow; };
		int col() const { return lcol; };
		void place(int row, int col);
		virtual bool menaces(const Piece* p) const = 0; // = 0 -> abstract class Piece -> all child meances functions must be virtual & const
};

class Rook : virtual public Piece {
	
	public:
		virtual bool menaces(const Piece* p) const;

};

class Bishop : virtual public Piece {

	public:
		virtual bool menaces(const Piece* p) const;

};

class Knight : virtual public Piece {

	public:
		virtual bool menaces(const Piece* p) const;

};

class Queen : virtual public Rook, virtual public Bishop {
	
	public:
		virtual bool menaces(const Piece* p) const;

};

class Amazon : virtual public Knight, virtual public Queen {

	public:
		virtual bool menaces(const Piece* p) const;

};

#endif
