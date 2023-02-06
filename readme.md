**Модуль 6.7. Домашнее задание**

Небольшой товарный склад (массив указателей на базовый класс электроники) и позволяет пользователю выбирать товар и просматривать его характеристики.

**Абстрактный базовый класс:**
IElectronics - в нем описаны свойства которыми обладают абсолютно все устройства. Марка, мощность.

**Дочерние классы портативной и бытовой электроники:**
Audio - У всех устройств данного типа есть звуковая схема: Mono|Stereo|5.1|7.1| итп.
Video - У всех видеоустройств есть диагональ экрана.

**Примеры конкретных видов дочерних классов:**
AudioPlayer - обладает свойствами из класса Audio. Собственное свойство: формат аудиозаписей CD DVD MP3 OGG итп.
Monitor - обладает свойствами из класса Video. Собственное свойство: Видео разъем (HDMI DVI VGA).

**Примеры класса ромбовидного наследования:**
TVset - телевизор. Обладает свойствами присущими аудио и видео устройствам. Собственное свойство: ТВ-тюнеры  (DVB-T DVB-С  DVB-S), поддержка аналогового ТВ.
SmartPhone - Является одновременно аудио и видео устройством. Иногда используется как средство связи, имеет модуль сотовой сети стандартов 2G 3G 4G.