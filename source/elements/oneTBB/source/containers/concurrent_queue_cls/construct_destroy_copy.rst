==================================
Construction, destruction, copying
==================================

Empty container constructors
----------------------------

    .. code:: cpp

        concurrent_queue();

        explicit concurrent_queue( const allocator_type& alloc );

    Constructs an empty ``concurrent_queue``. If provided, uses the allocator ``alloc`` to
    allocate the memory.

Constructor from the sequence of elements
------------------------------------------

    .. code:: cpp

        template <typename InputIterator>
        concurrent_queue( InputIterator first, InputIterator last,
                          const allocator_type& alloc = allocator_type() );

    Constructs a ``concurrent_queue`` containing all elements from the half-open interval
    ``[first, last)`` using the allocator ``alloc`` to allocate the memory.

    **Requirements**: the type ``InputIterator`` must meet the `InputIterator` requirements from the
    ``[input.iterators]`` ISO C++ Standard section.

Copying constructors
--------------------

    .. code:: cpp

        concurrent_queue( const concurrent_queue& other );

        concurrent_queue( const concurrent_queue& other,
                          const allocator_type& alloc );

    Constructs a copy of ``other``.

    If the allocator argument is not provided, it is obtained by
    ``std::allocator_traits<allocator_type>::select_on_container_copy_construction(other.get_allocator())``.

    The behavior is undefined in case of concurrent operations with ``other``.

Moving constructors
-------------------

    .. code:: cpp

        concurrent_queue( concurrent_queue&& other );

        concurrent_queue( concurrent_queue&& other,
                          const allocator_type& alloc );

    Constructs a ``concurrent_queue`` with the content of ``other`` using move semantics.

    ``other`` is left in a valid, but unspecified state.

    If the allocator argument is not provided, it is obtained by ``std::move(other.get_allocator())``.

    The behavior is undefined in case of concurrent operations with ``other``.

Destructor
----------

    .. code:: cpp

        ~concurrent_queue();

    Destroys the ``concurrent_queue``. Calls destructors of the stored elements and
    deallocates the used storage.

    The behavior is undefined in case of concurrent operations with ``*this``.
