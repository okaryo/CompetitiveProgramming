N = gets.to_i
T = gets.chomp
x = 0
y = 0
dx = [1, 0, -1, 0]
dy = [0, -1, 0, 1]
di = 0
N.times do |i|
  if T[i] == 'S'
    x += dx[di]
    y += dy[di]
  elsif
    di = (di + 1) % 4
  end
end
puts "#{x} #{y}"
