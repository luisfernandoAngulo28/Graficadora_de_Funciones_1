object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 492
  ClientWidth = 1022
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object TLabel
    Left = 32
    Top = 101
    Width = 3
    Height = 13
  end
  object Label1: TLabel
    Left = 48
    Top = 8
    Width = 58
    Height = 30
    Caption = 'f(x)='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 30
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Image1: TImage
    Left = 41
    Top = 69
    Width = 337
    Height = 319
  end
  object MainMenu1: TMainMenu
    Left = 8
    Top = 8
    object CrearPolinomio1: TMenuItem
      Caption = 'Polinomio'
      object Crear1: TMenuItem
        Caption = 'Crear'
        OnClick = Crear1Click
      end
      object insertar1: TMenuItem
        Caption = 'Insertar'
        OnClick = insertar1Click
      end
      object Mostrar1: TMenuItem
        Caption = 'Mostrar'
        OnClick = Mostrar1Click
      end
      object Graficar1: TMenuItem
        Caption = 'Graficar'
        OnClick = Graficar1Click
      end
    end
  end
end
