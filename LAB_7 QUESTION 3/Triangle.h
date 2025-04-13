namespace SHAPES{

    class Triangle{
        private:
        double Base;
        double Heigth;
        
        public:
        Triangle();
        Triangle(double newBase, double newHeight);
        ~Triangle();
        double getBase();
        double getHeight();
        double getArea();
        void setBase(double);
        void setHeight(double);
    };    
    }