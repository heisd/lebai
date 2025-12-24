import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/dxf/wheeltec_lebai_humble_2024_7_17/install/lebai_driver'
