class IPhysObject {
public:
    // Mass, kg.
    virtual double mass() const = 0;

    // Coordinates of the centre of mass, m.
    virtual CVector2D position() const = 0;

    // Comparison by mass.
    virtual bool operator== (const IPhysObject& ob) const = 0;

    virtual bool operator< (const IPhysObject& ob) const = 0;

    // Virtual destructor.
    virtual ~IPhysObject() {};
};
