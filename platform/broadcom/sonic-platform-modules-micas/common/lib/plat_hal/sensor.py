#!/usr/bin/env python3
#######################################################
#
# sensor.py
# Python implementation of the Class sensor
#
#######################################################
import time
from plat_hal.devicebase import devicebase


class sensor(devicebase):

    __Value = None
    __Min = None
    __Max = None
    __Low = None
    __High = None
    __ValueConfig = None
    __Flag = None
    __Unit = None
    __format = None
    __read_times = None

    __Min_config = None
    __Max_config = None
    __Low_config = None
    __High_config = None

    @property
    def Min_config(self):
        return self.__Min_config

    @Min_config.setter
    def Min_config(self, val):
        self.__Min_config = val

    @property
    def Max_config(self):
        return self.__Max_config

    @Max_config.setter
    def Max_config(self, val):
        self.__Max_config = val

    @property
    def Low_config(self):
        return self.__Low_config

    @Low_config.setter
    def Low_config(self, val):
        self.__Low_config = val

    @property
    def High_config(self):
        return self.__High_config

    @High_config.setter
    def High_config(self, val):
        self.__High_config = val

    @property
    def Unit(self):
        return self.__Unit

    @Unit.setter
    def Unit(self, val):
        self.__Unit = val

    @property
    def format(self):
        return self.__format

    @format.setter
    def format(self, val):
        self.__format = val

    @property
    def read_times(self):
        return self.__read_times

    @read_times.setter
    def read_times(self, val):
        self.__read_times = val

    @property
    def ValueConfig(self):
        return self.__ValueConfig

    @ValueConfig.setter
    def ValueConfig(self, val):
        self.__ValueConfig = val

    @property
    def Flag(self):
        return self.__Flag

    @Flag.setter
    def Flag(self, val):
        self.__Flag = val

    def get_median(self, value_config, read_times):
        val_list = []
        for i in range(0, read_times):
            ret, real_value = self.get_value(value_config)
            if i != (read_times - 1):
                time.sleep(0.01)
            if ret is False or real_value is None:
                continue
            val_list.append(real_value)
        val_list.sort()
        if val_list:
            return True, val_list[int((len(val_list) - 1) / 2)]
        return False, None

    @property
    def Value(self):
        try:
            ret, val = self.get_median(self.ValueConfig, self.read_times)
            if ret is False or val is None:
                return None
            if self.format is None:
                self.__Value = int(val)
            else:
                self.__Value = self.get_format_value(self.format % val)
            self.__Value = round(float(self.__Value), 3)
        except Exception:
            return None
        return self.__Value

    @Value.setter
    def Value(self, val):
        self.__Value = val

    @property
    def Min(self):
        try:
            if isinstance(self.Min_config, dict):
                if self.call_back is None:
                    self.__Min = self.Min_config.get("other")
                else:
                    ret = self.call_back()
                    if ret not in self.Min_config:
                        self.__Min = self.Min_config.get("other")
                    else:
                        self.__Min = self.Min_config[ret]
            else:
                self.__Min = self.Min_config

            if self.__Min is None:
                return None

            if self.format is not None:
                self.__Min = self.get_format_value(self.format % self.__Min)
            self.__Min = round(float(self.__Min), 3)
        except Exception:
            return None
        return self.__Min

    @Min.setter
    def Min(self, val):
        self.__Min = val

    @property
    def Max(self):
        try:
            if isinstance(self.Max_config, dict):
                if self.call_back is None:
                    self.__Max = self.Max_config.get("other")
                else:
                    ret = self.call_back()
                    if ret not in self.Max_config:
                        self.__Max = self.Max_config.get("other")
                    else:
                        self.__Max = self.Max_config[ret]
            else:
                self.__Max = self.Max_config

            if self.__Max is None:
                return None

            if self.format is not None:
                self.__Max = self.get_format_value(self.format % self.__Max)
            self.__Max = round(float(self.__Max), 3)
        except Exception:
            return None
        return self.__Max

    @Max.setter
    def Max(self, val):
        self.__Max = val

    @property
    def Low(self):
        try:
            if isinstance(self.Low_config, dict):
                if self.call_back is None:
                    self.__Low = self.Low_config.get("other")
                else:
                    ret = self.call_back()
                    if ret not in self.Low_config:
                        self.__Low = self.Low_config.get("other")
                    else:
                        self.__Low = self.Low_config[ret]
            else:
                self.__Low = self.Low_config

            if self.__Low is None:
                return None

            if self.format is not None:
                self.__Low = self.get_format_value(self.format % self.__Low)
            self.__Low = round(float(self.__Low), 3)
        except Exception:
            return None
        return self.__Low

    @Low.setter
    def Low(self, val):
        self.__Low = val

    @property
    def High(self):
        try:
            if isinstance(self.High_config, dict):
                if self.call_back is None:
                    self.__High = self.High_config.get("other")
                else:
                    ret = self.call_back()
                    if ret not in self.High_config:
                        self.__High = self.High_config.get("other")
                    else:
                        self.__High = self.High_config[ret]
            else:
                self.__High = self.High_config

            if self.__High is None:
                return None

            if self.format is not None:
                self.__High = self.get_format_value(self.format % self.__High)
            self.__High = round(float(self.__High), 3)
        except Exception:
            return None
        return self.__High

    @High.setter
    def High(self, val):
        self.__High = val

    def __init__(self, conf=None, call_back=None):
        self.ValueConfig = conf.get("value", None)
        self.Flag = conf.get("flag", None)
        self.Min_config = conf.get("Min", None)
        self.Max_config = conf.get("Max", None)
        self.Low_config = conf.get("Low", None)
        self.High_config = conf.get("High", None)
        self.Unit = conf.get('Unit', None)
        self.format = conf.get('format', None)
        self.read_times = conf.get('read_times', 1)
        self.call_back = call_back

    def __str__(self):
        formatstr =  \
            "ValueConfig:                : %s \n" \
            "Min :          %s \n" \
            "Max : %s \n" \
            "Unit  : %s \n" \
            "format:       : %s \n"

        tmpstr = formatstr % (self.ValueConfig, self.Min,
                              self.Max, self.Unit,
                              self.format)
        return tmpstr
