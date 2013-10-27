B::B(A a)
{
	m_a_instance = a;
}

B::~B()
{
}

int B::add_a_to_x(int x)
{
	return m_a_instance.m_private_a + x;	
}
