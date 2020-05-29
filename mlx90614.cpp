
/**
 * このファイルを使って、独自の関数やブロックを定義してください。
 * 詳しくはこちらを参照してください：https://makecode.microbit.org/blocks/custom
 */

enum MyEnum {
    //% block="one"
    One,
    //% block="two"
    Two
}

/**
 * カスタムブロック
 */
//% weight=100 color=#0fbc11 icon=""
namespace mlx90614 {
    let addr_i2c = 0x5A
    let addr_ta = 0x06
    let addr_tobj1 = 0x07
    let addr_tobj2 = 0x08

    //% blockId=mlx90614 block="temperature %loc"
    int temparature(TemperatureLocation loc) {
        uBit_MLX90614 sensor(&uBit.i2c);
        switch (loc) {
            case TemperatureLocation::Ambiant:
                return sensor.getAmbient();
            default:
                return sensor.getObject();
        }
    }

    /**
     * TODO: ここに関数を記述してください
     * @param value ここで値の説明をしてください。, eg: 5
     */
    //% block
    export function fib(value: number): number {
        return value <= 1 ? value : fib(value - 1) + fib(value - 2);
    }
}
