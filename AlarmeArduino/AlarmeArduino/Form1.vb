Public Class Form1

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load

        If SerialArduino.IsOpen() Then
            SerialArduino.Close()
        Else
            SerialArduino.Open()
            SerialArduino.Write("a")
        End If
        SerialArduino.Close()
        Application.Exit()
    End Sub



    Private Sub Form1_FormClosed(sender As Object, e As FormClosedEventArgs) Handles Me.FormClosed
        If SerialArduino.IsOpen() Then
            SerialArduino.Close()
        End If
    End Sub

End Class

