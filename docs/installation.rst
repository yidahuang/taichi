Installation
===============================================

Suppoprted Platforms:
 - Ubuntu (gcc 5+)
 - Mac OS X (gcc 5+, clang 4.0+)
 - Windows (Microsoft Visual Studio 2017)

Make sure you have `python 3.5+`.


Ubuntu, Arch Linux, and Mac OS X
---------------------------------------

.. code-block:: bash

   wget https://raw.githubusercontent.com/yuanming-hu/taichi/master/install.py
   python3 install.py


Windows
-------------------------------
Download and execute `this script <https://raw.githubusercontent.com/yuanming-hu/taichi/master/install.py>`_ with python3.

Additional environment variables: (assuming taichi is installed in ``DIR/taichi``)

Add ``DIR/taichi/python`` to ``PYTHONPATH`` and ``DIR/taichi/bin`` to ``PATH``

Examples
------------------------------
Please see `examples <https://github.com/yuanming-hu/taichi/tree/master/projects/examples>`_.

Run examples using `python3 [X.py]`. For example,

.. code-block:: bash

    python3 projects/examples/simulation/3d/mgpcg_smoke_3d.py
    python3 projects/examples/rendering/paper_cut.py

Please learn the python interface by examples for now.
Detailed documentation coming soon.