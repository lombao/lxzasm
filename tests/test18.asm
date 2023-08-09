# Amstrad semanal 82

org #a000
ent $
ld hl,reserva
ld bc,tabrsx
call #bcd1
ret
tabrsx: defw tabla
jp rutina
rutina: ld l,(ix+0)
ld h,(ix+1)
ld b,(hl)
inc hl
ld e,(hl)
inc hl
ld d,(hl)
ex de,hl
loop: call #bb18
call #bb5a
ld (hl),a
inc hl
dec b
ld a,b
cp 0
jr nz,loop
ret
reserva: defm "----"
tabla: defm "INPU"
defb "T"+#80
defb "00"

