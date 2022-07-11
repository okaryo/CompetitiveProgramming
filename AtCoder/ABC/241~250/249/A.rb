A,B,C,D,E,F,X = gets.split.map(&:to_i)

t_d = (X / (A + C)) * A * B + [(X % (A + C)), A].min * B
a_d = (X / (D + F)) * D * E + [(X % (D + F)), D].min * E
if t_d > a_d
  puts 'Takahashi'
elsif a_d > t_d
  puts 'Aoki'
else
  puts 'Draw'
end
