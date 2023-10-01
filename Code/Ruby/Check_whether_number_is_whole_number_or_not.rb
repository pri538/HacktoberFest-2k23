def is_whole_number?(number)
  number % 1 == 0
end

# Example usage:
puts is_whole_number?(5.0)   # true
puts is_whole_number?(5.5)   # false
puts is_whole_number?("5")   # true
puts is_whole_number?("5.5") # false
