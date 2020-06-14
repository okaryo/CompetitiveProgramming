x, n = gets.split.map(&:to_i)

if n == 0
  puts x
  exit
end

p = gets&.split&.map(&:to_i)

i = 0
while
  a = x - i
  b = x + i

  unless p.include?(a)
    puts a
    break
  end
  unless p.include?(b)
    puts b
    break
  end

  i += 1
end