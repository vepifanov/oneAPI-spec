.. _onemkl_vm_hypot:

hypot
=====


.. container::


   Computes a square root of sum of two squared elements.


   .. container:: section


      .. rubric:: Syntax
         :class: sectiontitle


      Buffer API:


      .. cpp:function:: event oneapi::mkl::vm::hypot(queue& exec_queue, int64_t n, buffer<T,1>& a, buffer<T,1>& b, buffer<T,1>& y, uint64_t mode = oneapi::mkl::vm::mode::not_defined )

      USM API:


      .. cpp:function:: event oneapi::mkl::vm::hypot(queue& exec_queue, int64_t n, T* a, T* b, T* y, vector_class<event> const & depends = {}, uint64_t mode = oneapi::mkl::vm::mode::not_defined )

      ``hypot`` supports the following precisions.


      .. list-table::
         :header-rows: 1

         * - T
         * - ``float``
         * - ``double``




.. container:: section


   .. rubric:: Description
      :class: sectiontitle


   The function hypot(a, b) computes a square root of sum of two squared
   elements.


   .. container:: tablenoborder


      .. list-table::
         :header-rows: 1

         * - Argument 1
           - Argument 2
           - Result
           - Error Code
         * - +0
           - +0
           - +0
           -  
         * - -0
           - -0
           - +0
           -  
         * - +∞
           - any value
           - +∞
           -  
         * - any value
           - +∞
           - +∞
           -  
         * - SNAN
           - any value
           - QNAN
           - INVALID
         * - any value
           - SNAN
           - QNAN
           - INVALID
         * - QNAN
           - any value
           - QNAN
           -  
         * - any value
           - QNAN
           - QNAN
           -  




   .. container:: tablenoborder


      .. list-table::
         :header-rows: 1

         * - Data Type
           - Threshold Limitations on Input Parameters
         * - single precision
           - \ ``abs(a[i]) < sqrt(FLT_MAX)``\ \ ``abs(b[i]) < sqrt(FLT_MAX)``\
         * - double precision
           - \ ``abs(a[i]) < sqrt(DBL_MAX)``\ \ ``abs(b[i]) < sqrt(DBL_MAX)``\




   The hypot(a, b) function does not generate any errors.


.. container:: section


   .. rubric:: Input Parameters
      :class: sectiontitle


   Buffer API:


   exec_queue
      The queue where the routine should be executed.


   n
      Specifies the number of elements to be calculated.


   a
      The buffer ``a`` containing 1st input vector of size ``n``.


   b
      The buffer ``b`` containing 2nd input vector of size ``n``.


   mode
      Overrides the global VM mode setting for this function call. See
      :ref:`onemkl_vm_setmode`
      function for possible values and their description. This is an
      optional parameter. The default value is ``oneapi::mkl::vm::mode::not_defined``.


   USM API:


   exec_queue
      The queue where the routine should be executed.


   n
      Specifies the number of elements to be calculated.


   a
      Pointer ``a`` to the 1st input vector of size ``n``.


   b
      Pointer ``b`` to the 2nd input vector of size ``n``.


   depends
      Vector of dependent events (to wait for input data to be ready).


   mode
      Overrides the global VM mode setting for this function call. See
      the :ref:`onemkl_vm_setmode`
      function for possible values and their description. This is an
      optional parameter. The default value is ``oneapi::mkl::vm::mode::not_defined``.


.. container:: section


   .. rubric:: Output Parameters
      :class: sectiontitle


   Buffer API:


   y
      The buffer ``y`` containing the output vector of size ``n``.


   USM API:


   y
      Pointer ``y`` to the output vector of size ``n``.


   return value (event)
      Function end event.


.. container:: familylinks


   .. container:: parentlink

      **Parent topic:** :ref:`onemkl_vm_mathematical_functions`


