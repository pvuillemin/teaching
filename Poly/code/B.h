class B
{
	public:
		B(A a);
		~B();
		int add_a_to_x(int x);

	private:
		A m_a_instance;
};
