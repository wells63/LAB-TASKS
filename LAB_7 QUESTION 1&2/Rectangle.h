class Rectangle{
    private:
    float length;
    float width;
    public:
    Rectangle();
    Rectangle(float newLength, float newWidth);
    ~Rectangle();
    void setLength(float newLength); 
    void setWidth(float newWidth);
    float getlength();
    float getwidth();
    float Area();
    
};